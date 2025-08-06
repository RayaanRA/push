#include "player.h"

void init_player(Player player, Tile tiles[][3], int rows, int cols) {
	player.radius = 10;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (tiles[i][j].tile_type == PLAYER) {
				printf("Found player at %d, %d\n", i, j);
				player.pos_x = i;
				player.pos_y = j;
			}
		}
	}
}