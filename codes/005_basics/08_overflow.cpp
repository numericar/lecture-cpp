#include <iostream>

int main() {
    char x = 129; // x = 129, result will bwe -127
    std::cout << (int) x << std::endl;

    char y = -128;
    std::cout << (int) --y << std::endl;

    return 0;
}