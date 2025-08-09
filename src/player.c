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

void handle_input(Player* player, Tile tiles[][3]) {
	if (IsKeyPressed(KEY_A)) {
		if (player->pos_x != 0 && tiles[player->pos_y][player->pos_x - 1].tile_type == NONE) {
			tiles[player->pos_y][player->pos_x].tile_type = NONE;
			tiles[player->pos_y][player->pos_x - 1].tile_type = PLAYER;
			player->pos_x -= 1;
		}

	} else if (IsKeyPressed(KEY_D)) {
		if (player->pos_x != 2 && tiles[player->pos_y][player->pos_x + 1].tile_type == NONE) {
			tiles[player->pos_y][player->pos_x].tile_type = NONE;
			tiles[player->pos_y][player->pos_x + 1].tile_type = PLAYER;
			player->pos_x += 1;
		}	

	} else if (IsKeyPressed(KEY_W)) {
		if (player->pos_y != 0 && tiles[player->pos_y - 1][player->pos_x].tile_type == NONE) {
			tiles[player->pos_y][player->pos_x].tile_type = NONE;
			tiles[player->pos_y - 1][player->pos_x].tile_type = PLAYER;
			player->pos_y -= 1;
		}
		
	} else if (IsKeyPressed(KEY_S)) {
		if (player->pos_y != 2 && tiles[player->pos_y + 1][player->pos_x].tile_type == NONE) {
			tiles[player->pos_y][player->pos_x].tile_type = NONE;
			tiles[player->pos_y + 1][player->pos_x].tile_type = PLAYER;
			player->pos_y += 1;	
		}

	}
}