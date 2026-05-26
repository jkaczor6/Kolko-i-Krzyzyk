#include "my_func.h"

bool placeFigure(GameState& state, int row, int col)
{
	if (state.board[row][col] != 0) return false; // pole zajete
	state.board[row][col] = state.playerTurn;
	state.playerTurn = (state.playerTurn == 1) ? 2 : 1;
	return true;
}