#include <stdlib.h>
#include <time.h>
#include "board.h"

int xplayer(board *current_bd) 
{
	int move = 0;
	int x,y;

	srand((unsigned int)time(NULL));

	while(1) {
		move = rand() % 9;
		y = move / 3; 
		x = move % 3;
		if(current_bd->tile[y][x] == 0)
			break;
	}
	
	return move;
}
