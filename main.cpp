#include "GamblingGame.cpp"
#include <iostream>
#include"Player.cpp"

int main() {
    std::string player1, player2;
    std::cout << "Enter name for player 1: ";
    std::cin >> player1;
    std::cout << "Enter name for player 2: ";
    std::cin >> player2;

    GamblingGame game(player1, player2);
    game.play();

    return 0;
}
