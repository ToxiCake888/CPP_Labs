#include <iostream>
#include <string>

std::string mirror(int num) 
{
	std::string end_num ="";
	std::string new_num = std::to_string(num);
	for (int i=0; i < new_num.length(); i++) {
		end_num.insert(0, 1,new_num[i]);
	}
	//num = stoi(end_num);
	return end_num;
}

int convert_to_ten(int num , int scale) {
	std::string num_str = mirror(num);
	std::string new_num;
	num = 0;
	for (int i = 0; i < num_str.length(); i++) {
		num += (num_str[i]-'0') * pow(scale, i);
	}
	return num;
}

std::string more_ten_convert(int num) {
	switch (num)
	{
	case(10):
	{
		return "A";
	}
	case(11):
	{
		return "B";
	}
	case(12):
	{
		return "C";
	}
	case(13):
	{
		return "D";
	}
	case(14):
	{
		return "E";
	}
	case(15):
	{
		return "F";
	}
	default:
		return std::to_string(num);
	}
}

std::string ten_to_any(int num, int scale) {
	std::string new_num;
	while (num > scale)
	{
		new_num.insert(0, more_ten_convert(num % scale));
		num = num / scale;
	}
	new_num.insert(0, more_ten_convert(num % scale));
	return new_num;
}

std::string any_to_any(int num, int first_scale, int last_scale) {
	std::string last_num;
	last_num=ten_to_any(convert_to_ten(num, first_scale) , last_scale);
	return last_num;
}
