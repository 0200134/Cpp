#ifndef GAMBLINGGAME_HPP
#define GAMBLINGGAME_HPP

#include "Player.hpp"
#include <cstdlib>
#include <ctime>

class GamblingGame {
private:
    Player players[2];
public:
    GamblingGame(const std::string& player1, const std::string& player2);
    void play();
};

#endif // GAMBLINGGAME_HPP
