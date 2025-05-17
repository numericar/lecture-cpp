#include <iostream>

int main() {
    // 
    float r, a;
    std::cout << "Enter radius: ";
    std::cin >> r;
    a = 3.1425f * r * r;
    std::cout << "Area is " << a << std::endl;

    return 0;
}