#include <gtest/gtest.h>
#include "../my_func.h"

TEST(MyFunc, CzyDziala)
{
	my_func();
	SUCCEED();
}

TEST(GameState, MoznaPolozycNaPustymPolu)
{
	bool polozona{ polozFigure() };
	ASSERT_TRUE(polozona);
}

TEST(GameState, NieMoznaPolozycNaZajetymPolu)
{
	polozFigure();
	bool polozona{ polozFigure() };
	ASSERT_FALSE(polozona);
}