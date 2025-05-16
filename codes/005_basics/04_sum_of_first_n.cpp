#include <iostream>

int main() {
    int n = 0, sum = 0;

    std::cout << "Enter n ";
    std::cin >> n;

    sum = n * (n + 1) / 2;

    std::cout << "Sum is " << sum << std::endl;

    return 0;
}