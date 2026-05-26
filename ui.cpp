#include "ui.h"

std::string render_ui(GameState& state)
{
	std::string board{ "-----   \n" };

	board += "|"; 
	board += toChar(state.board[0][0]);
	board += toChar(state.board[0][1]);
	board += toChar(state.board[0][2]); 
	board += "|   \n";

	board += "|";
	board += toChar(state.board[1][0]);
	board += toChar(state.board[1][1]);
	board += toChar(state.board[1][2]);
	board += "|   \n";

	board += "|";
	board += toChar(state.board[2][0]);
	board += toChar(state.board[2][1]);
	board += toChar(state.board[2][2]);
	board += "|   \n";

	board += "-----   \n";

	return board;
}

char toChar(int cell)
{
	if (cell == 1) return 'O';
	if (cell == 2) return 'X';
	return ' ';
}
