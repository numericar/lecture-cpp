#include <iostream>

int main() {
    // initialize 
    float base = 0.0f, height = 0.0f, area = 0.0f;

    // input
    std::cout << "Enter base and height: " << std::endl;
    std::cin >> base >> height;

    // process
    area = (base * height) / 2.0f;

    // output
    std::cout << "Area of triangle is " << area << std::endl;

    return 0;
}