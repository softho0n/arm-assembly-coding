#include <stdlib.h>
#include <stdio.h>
#include "board.h"

int (*xp)(board *current_bd);
int (*op)(board *current_bd);

int XP(board *);
int OP(board *);

int main(int argc, char *argv[])
{
	int turn = 0;
	int current_move;
	board *game_bd;
	game_bd = (board *)malloc(sizeof(board));
	if(game_bd == NULL)
		perror("malloc");

	init_bd(game_bd);

	xp = XP;
	op = OP;

	while(1) {
		turn++;

		current_move = op(game_bd);	
		if(is_legal(current_move, game_bd) != 0) {
			printf("O-Player illegal movement!\n");
			break;
		}
		update_bd(1, current_move, game_bd);
		print_bd(1, turn, game_bd);

		if(is_end(game_bd) == 1) {
			printf("O-Player won!\n");
			break;
		}
		if(turn == 5) {
			printf("Tie\n");
			break;
		}

		current_move = xp(game_bd);
		if(is_legal(current_move, game_bd) != 0) {
			printf("X-Player illegal movement!\n");
			break;
		}
		update_bd(2, current_move, game_bd);
		print_bd(2, turn, game_bd);

		if(is_end(game_bd) == 2) {
			printf("X-Player won!\n");
			break;
		}
	}

	return 0;
}
