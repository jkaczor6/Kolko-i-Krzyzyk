#include <gtest/gtest.h>
#include "../my_func.h"
#include "../GameState.h"

TEST(GameState, MoznaPolozycNaPustymPolu)
{
	GameState state;
	ASSERT_TRUE(polozFigure(state, 2, 2));
}

TEST(GameState, NieMoznaPolozycNaZajetymPolu)
{
	GameState state;
	polozFigure(state, 1, 1);
	ASSERT_FALSE(polozFigure(state, 1, 1));
}

TEST(GameState, PostawWTymSamymRzedzie)
{
	GameState state;
	polozFigure(state, 0, 0);
	ASSERT_TRUE(polozFigure(state, 0, 1));
}

TEST(GameState, PostawWTejSamejKolumnie)
{
	GameState state;
	polozFigure(state, 0, 0);
	ASSERT_TRUE(polozFigure(state, 1, 0));
}

TEST(GameState, KolkoJakoGraczNaStarcie)
{
	GameState state;
	assert(state.gracz == 1);
}

TEST(GameState, ZmianaGraczaPoRuchu)
{
	GameState state;
	polozFigure(state, 0, 0);
	assert(state.gracz == 2);
}

TEST(GameState, PowrotDoKolkaPoRuchuKrzyzyka)
{
	GameState state;
	polozFigure(state, 0, 0);
	polozFigure(state, 1, 1);
	assert(state.gracz == 1);
}