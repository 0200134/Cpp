#include "GamblingGame.hpp"
#include <iostream>

GamblingGame::GamblingGame(const std::string& player1, const std::string& player2) 
    : players{ Player(player1), Player(player2) } {
    std::srand(std::time(0)); // 난수 생성을 위한 시드 설정
}

void GamblingGame::play() {
    char c;
    while (true) {
        for (int i = 0; i < 2; ++i) {
            std::cout << players[i].name << ">> : ";
            std::cin.get(c);
            if (c == '\n') {
                std::cout << "<Enter>" << std::endl;
                int numbers[3];
                for (int j = 0; j < 3; ++j) {
                    numbers[j] = std::rand() % 3;
                    std::cout << numbers[j] << " ";
                }
                std::cout << std::endl;
                if (numbers[0] == numbers[1] && numbers[1] == numbers[2]) {
                    std::cout << players[i].name << " wins!" << std::endl;
                    return;
                }
            }
        }
    }
}
