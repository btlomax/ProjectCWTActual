import json
import re
import shutil
from pathlib import Path


PROJECT_ROOT = Path.cwd()
LAYOUTS_DIR = PROJECT_ROOT / "data/layouts"
MAPS_DIR = PROJECT_ROOT / "data/maps"
LAYOUTS_FILE = LAYOUTS_DIR / "layouts.json"
MAP_GROUPS_FILE = MAPS_DIR / "map_groups.json"
EVENT_SCRIPTS_FILE = PROJECT_ROOT / "data/event_scripts.s"


def remove_directory(path):
    if path.is_dir():
        shutil.rmtree(path)
        print(f"Removed {path.relative_to(PROJECT_ROOT)}")


if not (PROJECT_ROOT / "Makefile").is_file():
    print("Please run this script from the project root folder.")
    raise SystemExit(1)

with LAYOUTS_FILE.open(encoding="utf-8") as file:
    layouts_data = json.load(file)

emerald_layouts = {
    layout["id"]
    for layout in layouts_data["layouts"]
    if layout.get("layout_version") == "emerald"
}
emerald_layout_directories = {
    PROJECT_ROOT / Path(layout["border_filepath"]).parent
    for layout in layouts_data["layouts"]
    if layout.get("layout_version") == "emerald"
}

emerald_maps = set()
for map_directory in MAPS_DIR.iterdir():
    map_file = map_directory / "map.json"
    if not map_file.is_file():
        continue

    with map_file.open(encoding="utf-8") as file:
        map_data = json.load(file)

    if map_data.get("layout") in emerald_layouts:
        emerald_maps.add(map_directory.name)

print(f"Deleting {len(emerald_maps)} Emerald maps.")
for map_name in emerald_maps:
    remove_directory(MAPS_DIR / map_name)

print(f"Deleting {len(emerald_layout_directories)} Emerald layouts.")
for layout_directory in emerald_layout_directories:
    remove_directory(layout_directory)

# Mapjson uses this timestamp to regenerate layout includes after layout removal.
LAYOUTS_FILE.touch()

print("Deleting Emerald map script includes from data/event_scripts.s")
with EVENT_SCRIPTS_FILE.open(encoding="utf-8") as file:
    event_script_lines = file.readlines()

with EVENT_SCRIPTS_FILE.open("w", encoding="utf-8") as file:
    for line in event_script_lines:
        map_include = re.search(r"data/maps/([^/]+)/", line)
        if map_include is None or map_include.group(1) not in emerald_maps:
            file.write(line)

print("Deleting Emerald maps from data/maps/map_groups.json")
with MAP_GROUPS_FILE.open(encoding="utf-8") as file:
    map_groups = json.load(file)

remaining_groups = []
for group in map_groups["group_order"]:
    remaining_maps = [
        map_name for map_name in map_groups[group] if map_name not in emerald_maps
    ]
    if remaining_maps:
        map_groups[group] = remaining_maps
        remaining_groups.append(group)
    else:
        map_groups.pop(group)

map_groups["group_order"] = remaining_groups

with MAP_GROUPS_FILE.open("w", encoding="utf-8") as file:
    json.dump(map_groups, file, indent=2)
    file.write("\n")
