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

   //implement your code here

   return score;
}
