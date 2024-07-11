#include "game.hpp"


Game::Game()
: m_rollResults{}
{
}


void Game::roll(int rollResult)
{
   m_rollResults.push_back(rollResult);
}


int Game::getScore()
{
   int score = 0;
   int frameIdx = 0;
   for (int frame = 0; frame < 10; ++frame)
   {
      if (frameIdx >= m_rollResults.size())
      {
         return -1; // Error: not enough rolls
      }
      if (isStrike(frameIdx))
      {
         score += 10 + getStrikeBonus(frameIdx);
         frameIdx++;
      }
      else if (isSpare(frameIdx))
      {
         score += 10 + getSpareBonus(frameIdx);
         frameIdx += 2;
      }
      else
      {
         score += getRegularPointsInFrame(frameIdx);
         frameIdx += 2;
      }
   }
   return score;
}


bool Game::isStrike(int frameIdx)
{
   return (m_rollResults[frameIdx] == 10);
}


bool Game::isSpare(int frameIdx)
{
   return ((m_rollResults[frameIdx] + m_rollResults[frameIdx + 1]) == 10);
}


int Game::getStrikeBonus(int frameIdx)
{
   return (m_rollResults[frameIdx + 1] + m_rollResults[frameIdx + 2]);
}


int Game::getSpareBonus(int frameIdx)
{
   return (m_rollResults[frameIdx + 2]);
}


int Game::getRegularPointsInFrame(int frameIdx)
{
   return (m_rollResults[frameIdx] + m_rollResults[frameIdx + 1]);
}
