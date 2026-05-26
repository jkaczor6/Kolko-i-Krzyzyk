#include <gtest/gtest.h>
#include "../my_func.h"

TEST(MyFunc, CzyDziala)
{
	my_func();
	SUCCEED();
}

TEST(GameState, MoznaPolozycNaPustymPolu)
{
	bool pole{ false };
	EXPECT_TRUE(moznaPolozyc(pole));
}

TEST(GameState, NieMoznaPolozycNaZajetymPolu)
{
	bool pole{ true };
	EXPECT_FALSE(moznaPolozyc(pole));
}