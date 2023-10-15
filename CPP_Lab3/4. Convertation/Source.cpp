#include <iostream>
#include <string>

void convert(int num, int scale) {
	std::string new_num;
	while (num > scale)
	{
		new_num.insert(0, std::to_string(num % scale));
		num = num / scale;
	}
	new_num.insert(0, std::to_string(num % scale));
	std::cout << new_num;
}