#include "gtest/gtest.h"
#include "../src/game.hpp"


class GameTest
    : public ::testing::Test
{
protected:
    Game m_game;

    void SetUp() override
    {
        m_game = Game();
    }

    void rollOnlyThisNumber(int nRolls, int rollResult)
    {
        for (int i = 0; i < nRolls; ++i)
        {
            m_game.roll(rollResult);
        }
    }
};


TEST_F(GameTest, ScoreIsZeroWithOnlyZeroRolls)
{
    rollOnlyThisNumber(20, 0);
    EXPECT_EQ(0, m_game.getScore());
}

TEST_F(GameTest, ScoreIsTwentyWithOnlyOnesRolled)
{
    rollOnlyThisNumber(20, 1);
    EXPECT_EQ(20, m_game.getScore());
}

TEST_F(GameTest, testOneSpare)
{
    m_game.roll(5);
    m_game.roll(5);
    m_game.roll(3);
    rollOnlyThisNumber(17, 0);
    EXPECT_EQ(16, m_game.getScore());
}

TEST_F(GameTest, testOneStrike)
{
    m_game.roll(10);
    m_game.roll(5);
    rollOnlyThisNumber(17, 0);
    EXPECT_EQ(20, m_game.getScore());
}

TEST_F(GameTest, testPerfectGame)
{
    rollOnlyThisNumber(12, 10);
    EXPECT_EQ(300, m_game.getScore());
}

TEST_F(GameTest, testIncompleteGameOneFrame)
{
    m_game.roll(2);
    EXPECT_EQ(-1, m_game.getScore());
}

TEST_F(GameTest, testIncompleteGameNineFrames)
{
    m_game.roll(2);
    m_game.roll(2);
    m_game.roll(2);
    m_game.roll(2);
    m_game.roll(2);
    m_game.roll(2);
    m_game.roll(2);
    m_game.roll(2);
    m_game.roll(2);
    EXPECT_EQ(-1, m_game.getScore());
}
