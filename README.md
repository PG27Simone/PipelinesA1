PG27 Simone Cormier
Pipelines
A1: Dev Tools

When you open the project, go to All>Content>Level and open "CurrentLevel" to open persistent level.

Dev Tool can be found in All>Content>UIWidgets as "CheckpointDevTool". Right click on it and click "Run Editor Utility Widget". When you run it it will find all "BP_Checkpoints" in the level and add them to the dropdown in the dev tool to choose from. 
Outside of play mode, you can choose a checkpoint from the drop down and when you play the game you will spawn there. 

You can add any "BP_Checkpoints" in the scene and if you re-run the dev tool it will add it to the list that you can spawn to. "BP_PlayerSpawner" handles the spawning logic in blueprint. 
