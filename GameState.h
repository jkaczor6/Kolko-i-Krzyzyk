#pragma once

struct GameState
{
	int board[3][3]{};
	int playerTurn{ 1 }; // 1 - kolko, 2 - krzyzyk
};