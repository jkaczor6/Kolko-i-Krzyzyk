#include <iostream>
#include "game.h"
#include "ui.h"

int main()
{
	GameState state;
	placeFigure(state, 0, 0);
	placeFigure(state, 1, 1);
	std::string ui = render_ui(state);
	std::cout << ui;
	return 0;
}