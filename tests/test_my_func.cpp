#include <gtest/gtest.h>
#include "../my_func.h"
#include "../GameState.h"

TEST(MyFunc, CzyDziala)
{
	my_func();
	SUCCEED();
}

TEST(GameState, MoznaPolozycNaPustymPolu)
{
	GameState state;
	bool polozona{ polozFigure(state, 2, 2) };
	ASSERT_TRUE(polozona);
}

TEST(GameState, NieMoznaPolozycNaZajetymPolu)
{
	GameState state;
	polozFigure(state, 1, 1);
	bool polozona{ polozFigure(state, 1, 1) };
	ASSERT_FALSE(polozona);
}