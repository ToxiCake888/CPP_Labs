#include <iostream>
#include <bitset>
#include <string>
#include "Header.h"

int main() {
	int option;
	std::bitset <8> stats;
	while (true) {

	
	std::cout << "1. start round"<<std::endl;		//option choose block
	std::cout << "2. check stats" << std::endl;
	std::cout << "your choise: " ;
	option=input_option(2);
	switch (option)
	{
	case(1): {
		stats[0]=charter_stat_youth0();
		std::cout << stats;
		stats[1]=charter_stat_cure1();
		break;
		}
	case(2): {
			std::cout <<std::endl<< stats << std::endl;					//stats block
			//std::cout << "youth: " << stats[0] << std::endl;
			break;
		}
	default:
		return 1;
		break;
	}
	}
	return 1;
}