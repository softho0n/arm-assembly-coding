#include "board.h"

int is_legal(int movement, board *current_bd) {
	if(movement < 0 || movement > 8)
		return -1;
	int y = movement / 3;
	int x = movement % 3;
	if(current_bd->tile[y][x] != 0)
		return -1;
	else
		return 0;	
}
