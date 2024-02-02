#include <iostream>
void circle_stats() {
	double r;
	double p = 3.14;
	std::cout << "Insert radius ";
	std::cin >> r;
	std::cout << "L= " << 2 * p * r << '\n';
	std::cout << "SC= " << p * r * r << '\n';
	std::cout << "SS= " << 4 * p * r * r << '\n';
	std::cout << "V= " << 4.0 / 3 * p * r * r * r << '\n';
}