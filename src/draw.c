#include "draw.h"

void draw_grid_lines(Tile tiles[][3], Player player, int rows, int cols) {
	int pos_x = 130;
	int pos_y = 130;
	int grid_width = 75;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			DrawRectangleLines(pos_x + grid_width, pos_y, grid_width, grid_width, WHITE);

			if (i == player.pos_x && j == player.pos_y) {
				// Scale grid coordinates to screen coordinates
			}
			pos_x += grid_width;
		}
		pos_y += grid_width;
		pos_x = 130;
	}
}