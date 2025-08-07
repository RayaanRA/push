#include "player.h"

void init_player(Player* player, Tile tiles[][3], int rows, int cols) {
	player->radius = 10;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (tiles[i][j].tile_type == PLAYER) {
				printf("Found player at column %d, row %d\n", j, i);
				player->pos_x = j;
				player->pos_y = i;
				return;
			}
		}
	}
}