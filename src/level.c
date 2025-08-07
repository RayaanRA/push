#include "level.h"

Tile tempLevel[][3] = {
	{ {WALL}, {WALL}, {WALL} },
	{ {WALL}, {NONE}, {PLAYER} },
	{ {GOAL}, {BOX}, {NONE} }
};

void add_level(Level* levels, int* level_count, int rows, int cols) {
	if (*level_count >= MAX_LEVELS) return;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			levels[0].tiles[i][j] = tempLevel[i][j];
		}
	}

	
	(*level_count)++;
}