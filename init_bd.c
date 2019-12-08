#include "board.h"

void init_bd(board *target_board)
{
	int i, j;

	for(i = 0 ; i < 3 ; i++)
		for(j = 0 ; j < 3 ; j++)
			target_board->tile[i][j] = 0;
	return;
}
