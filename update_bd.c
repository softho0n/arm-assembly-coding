#include "board.h"

void update_bd(int player, int current_move, board *game_bd)
{
	int y = current_move / 3;
	int x = current_move % 3;

	game_bd->tile[y][x] = player;
	return;
}
