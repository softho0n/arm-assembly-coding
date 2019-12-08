#include "board.h"

int is_end(board *current_bd)
{
	int win = 0;
	int i;
	
	for(i = 0 ; i < 3; i++)
		if((current_bd->tile[i][0] != 0) && (current_bd->tile[i][0] == current_bd->tile[i][1]) && (current_bd->tile[i][1] == current_bd->tile[i][2]))
			win = win | current_bd->tile[i][0];

	for(i = 0 ; i < 3; i++)
		if((current_bd->tile[0][i] != 0) && (current_bd->tile[0][i] == current_bd->tile[1][i]) && (current_bd->tile[1][i] == current_bd->tile[2][i]))
			win = win | current_bd->tile[0][i];

	if((current_bd->tile[0][0] != 0) && (current_bd->tile[0][0] == current_bd->tile[1][1]) && (current_bd->tile[1][1] == current_bd->tile[2][2]))
			win = win | current_bd->tile[0][0];

	if((current_bd->tile[2][0] != 0) && (current_bd->tile[2][0] == current_bd->tile[1][1]) && (current_bd->tile[1][1] == current_bd->tile[0][2]))
			win = win | current_bd->tile[2][0];

        return win;
}
