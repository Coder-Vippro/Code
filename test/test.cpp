#include <iostream>
#include <cmath>
#include <Windows.h>

void drawHeart() {
    const int width = 40;
    const int height = 20;
    const char heartSymbol = '*';

    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            float distX = std::abs(x - width / 2.0f);
            float distY = std::abs(y - height / 2.0f - 4.0f);

            float boundary = 0.25f * (distX + distY);

            if (boundary > 7 - y) {
                std::cout << " ";
            } else {
                std::cout << heartSymbol;
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    system("cls");  // Clear console screen

    drawHeart();

    // Move cursor to print text inside the heart
    COORD pos;
    pos.X = 15;
    pos.Y = 10;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

    // Print text inside the heart
    std::cout << "Anh yêu em" << std::endl;

    return 0;
}
