#ifndef __PLAYER__
#define __PLAYER__

#include "level.h"
#include <stdio.h>

typedef struct {
	int pos_x;
	int pos_y;
	int radius;
} Player;

void init_player(Player* player, Tile tiles[][3], int rows, int cols);

#endif