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
	bool polozona{ polozFigure(state) };
	ASSERT_TRUE(polozona);
}

TEST(GameState, NieMoznaPolozycNaZajetymPolu)
{
	GameState state;
	polozFigure(state);
	bool polozona{ polozFigure(state) };
	ASSERT_FALSE(polozona);
}