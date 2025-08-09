#include "level.h"
#include "draw.h"
#include "player.h"

int main() {

	int screenWidth = 640;
	int screenHeight = 480;

	InitWindow(screenWidth, screenHeight, "PUSH");
	SetTargetFPS(60);

	Level levels[MAX_LEVELS];
	int levels_count = 0;
	add_level(levels, &levels_count, 3, 3); // eventually read from file, hardcode one level for now

	Player player;
	init_player(&player, levels[0].tiles, 3, 3);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLACK);
		draw_grid(levels[0].tiles, player, 3, 3);
		handle_input(&player, levels[0].tiles);
		EndDrawing();
	}

	CloseWindow();

	return 0;
}