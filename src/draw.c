#include "draw.h"

void draw_grid(Tile tiles[][3], Player player, int rows, int cols) {
	int offset_x = 120;
	int offset_y = 120;
	int grid_width = 75;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {

			if (tiles[i][j].tile_type != WALL) {
				DrawRectangleLines((offset_x), (offset_y), grid_width, grid_width, WHITE);				
			} else {
				DrawRectangle(offset_x, offset_y, grid_width, grid_width, WHITE);
			}

			if (j == player.pos_x && i == player.pos_y) {
				DrawCircle(offset_x + (grid_width / 2), offset_y + (grid_width / 2), 10.0f, GREEN); // adjust to center circle
			}



			offset_x = 120 + grid_width * (j + 1);
		}
		offset_y = 120 + grid_width * (i + 1);
		offset_x = 120;
	}
}