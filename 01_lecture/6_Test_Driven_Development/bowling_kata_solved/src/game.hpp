#ifndef GAME_HPP
#define GAME_HPP

#include <vector>

class Game
{
public:
    Game();
    void roll(int);
    int getScore();

private:
    bool isStrike(int);
    bool isSpare(int);
    int getStrikeBonus(int);
    int getSpareBonus(int);
    int getRegularPointsInFrame(int);

    std::vector<int> m_rollResults;
};


#endif // GAME_HPP