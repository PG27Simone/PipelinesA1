import unreal

def set_selected_spawn(spawn_point_name):
    # Find the BP_SpawnPointManager actor in the level
    actors = unreal.EditorLevelLibrary.get_all_level_actors()
    for actor in actors:
        if actor.get_class().get_name() == "BP_PlayerSpawner_C":
            actor.set_editor_property("SelectedSpawnPointName", spawn_point_name)
            unreal.log(f"Selected spawn point set to: {spawn_point_name}")
            break
    else:
        unreal.log_warning("BP_PlayerSpawner not found in level.")