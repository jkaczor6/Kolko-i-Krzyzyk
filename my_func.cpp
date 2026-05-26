#include "my_func.h"

void my_func()
{
	
}

bool polozFigure(GameState& state, int row, int col)
{
	if (state.plansza[row][col] != 0) return false;
	state.plansza[row][col] = 1;
	return true;
}