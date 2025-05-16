#include <iostream>
#include <string>

int firstProgram() {
	// sum of 2 number
	int a, b, c;

	std::cout << "Enter 2 numbers: ";
	std::cin >> a >> b; // รับ input มาจาก keyboard

	c = a + b;

	std::cout << "Sum of values is " << c << std::endl;

	// welcome user
	std::string name;
	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
	std::cout << "Welcome " << name << std::endl;

	return 0;
}