#ifndef __LEVEL__
#define __LEVEL__

#define MAX_LEVELS 1

#include "raylib.h"

typedef enum TileType { NONE, WALL, PLAYER, BOX, GOAL } TileType;

typedef struct {
	TileType tile_type;
} Tile;

typedef struct {
	Tile tiles[3][3];
} Level;

void add_level(Level* levels, int* level_count, int rows, int cols);

#endif