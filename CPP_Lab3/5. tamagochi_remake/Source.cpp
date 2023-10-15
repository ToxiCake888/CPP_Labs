#include <iostream>

int input_option(int switch_size) {
	int num;
	std::cin >> num;
	if (num >= switch_size && num < 0) {
		std::cout << "wrong input";
		return input_option(switch_size);

	}
	return num;
}

int charter_stat_youth0() 
{
	std::cout << "choose the option:"<< std::endl;
	std::cout << "1.eat apple" << std::endl;
	std::cout << "2.live long life" << std::endl;
	std::cout << "your choise: ";
	int stat_youth = input_option(2);
	return stat_youth;
}

int charter_stat_cure1() {
	std::cout << "choose the option:" << std::endl;
	std::cout << "1.no cure" << std::endl;
	std::cout << "2.cure" << std::endl;
	std::cout << "your choise: ";
	int stat_cure = input_option(2);
	return stat_cure;
}

