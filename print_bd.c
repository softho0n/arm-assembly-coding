#include <stdio.h>
#include "board.h"

void print_bd(int player, int turn, board *current_bd)
{
        int i,j;

	printf("%d: ", turn);
	if(player == 1)
		printf("O-Player's Turn\n");
	else
		printf("X-Player's Turn\n");

        for(i = 0 ; i < 3 ; i++) {
                for(j = 0 ; j < 3 ; j++) {
                        if(current_bd->tile[i][j] == 0)
                                printf(".");
                        else if(current_bd->tile[i][j] == 1)
                                printf("O");
                        else printf("X");
                }
                printf("\n");
        }
	printf("\n");
}
