#include "my_func.h"

void my_func()
{
	
}

bool polozFigure(GameState& state, int row, int col)
{
	if (state.plansza[row][col] != 0) return false; // pole zajete
	state.plansza[row][col] = state.gracz;
	state.gracz = (state.gracz == 1) ? 2 : 1;
	return true;
}