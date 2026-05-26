#include "my_func.h"

void my_func()
{
	
}

bool polozFigure(GameState& state)
{
	if (state.pole) return false;
	state.pole = true;
	return true;
}