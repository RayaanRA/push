#ifndef __DRAW__
#define __DRAW__

#include "level.h"
#include "player.h"
#include "raylib.h"

void draw_grid_lines(Tile tiles[][3], Player player, int rows, int cols);

#endif