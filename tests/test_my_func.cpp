#include <gtest/gtest.h>
#include "../game.h"
#include "../GameState.h"
#include "../ui.h"

TEST(GameState, CanPlaceFigureOnEmptyCell)
{
	GameState state;
	ASSERT_TRUE(placeFigure(state, 2, 2));
}

TEST(GameState, CantPlaceFigureOnOccupiedCell)
{
	GameState state;
	placeFigure(state, 1, 1);
	ASSERT_FALSE(placeFigure(state, 1, 1));
}

TEST(GameState, PlaceFigureInTheSameRow)
{
	GameState state;
	placeFigure(state, 0, 0);
	ASSERT_TRUE(placeFigure(state, 0, 1));
}

TEST(GameState, PlaceFigureInTheSameColumn)
{
	GameState state;
	placeFigure(state, 0, 0);
	ASSERT_TRUE(placeFigure(state, 1, 0));
}

TEST(GameState, CirclesTurnOnStart)
{
	GameState state;
	assert(state.playerTurn == 1);
}

TEST(GameState, SwitchPlayerTurnAfterPlacingFigure)
{
	GameState state;
	placeFigure(state, 0, 0);
	assert(state.playerTurn == 2);
}

TEST(GameState, CirclesTurnAfterCross)
{
	GameState state;
	placeFigure(state, 0, 0);
	placeFigure(state, 1, 1);
	assert(state.playerTurn == 1);
}

TEST(GameUI, RenderEmptyBoard)
{
	GameState state;
	std::string expectedBoard{ 
		"-----   \n"
		"|   |   \n"
		"|   |   \n"
		"|   |   \n"
		"-----   \n"
	};
	assert(render_ui(state) == expectedBoard);
}

TEST(GameUI, RenderBoardWithCircle)
{
	GameState state;
	placeFigure(state, 0, 0);
	std::string expectedBoard{ 
		"-----   \n"
		"|O  |   \n"
		"|   |   \n"
		"|   |   \n"
		"-----   \n"
	};
	assert(render_ui(state) == expectedBoard);
}

TEST(GameUI, RenderBoardWithCross)
{
	GameState state;
	placeFigure(state, 0, 0);
	placeFigure(state, 2, 1);
	std::string expectedBoard{ 
		"-----   \n"
		"|O  |   \n"
		"|   |   \n"
		"| X |   \n"
		"-----   \n"
	};
	assert(render_ui(state) == expectedBoard);
}