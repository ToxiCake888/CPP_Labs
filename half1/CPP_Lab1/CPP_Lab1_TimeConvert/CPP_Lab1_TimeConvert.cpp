#include <iostream>
int d, h, m, s,i;
int main() {
	std::cout << "insert day";
	std::cin >> d;
	std::cout << "insert hour";
	std::cin >> h;
	std::cout << "insert min";
	std::cin >> m;
	std::cout << "insert sec";
	std::cin >> s;
	i = s + m * 60 + h * 60 * 60 + d * 24 * 60 * 60;
		return i;
}



