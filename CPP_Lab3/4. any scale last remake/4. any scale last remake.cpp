#include <iostream>
#include <string>
#include "Header.h"
int main()
{
	int num , first_scale , last_scale;

	std::cout << "num " ;
	std::cin >> num;

	std::cout << "first_scale ";
	std::cin >> first_scale;

	std::cout << "last scale ";
	std::cin >> last_scale;

	std::cout << any_to_any(num , first_scale, last_scale);
	return 0;
}
