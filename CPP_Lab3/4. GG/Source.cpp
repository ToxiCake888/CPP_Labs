#include <iostream>
#include <string>
using namespace std;


string mirror(string num) {
	string last_num = "";
	string num_str = num;
	for (int i=0; i < num_str.length(); i++) {
		last_num.insert(0,1, num_str[i]);
	}
	return last_num;
}


string convert_to_ten(string num, int scale) {
	if (scale == 10) {
		return num;
	}
	else {
		int last_num = 0;
		num = mirror(num);
		for (int i = 0; i < num.length(); i++) {

			if (num[i] - '0' >= 0 && num[i] - '0' <= 9) {
				last_num += (num[i] - '0') * pow(scale, i);
			}

			else if (num[i] >= 'a' && num[i] <= 'f') {
				last_num += (num[i] - 'a' + 10) * pow(scale, i);
			}

			else if (num[i] >= 'A' && num[i] <= 'F') {
				last_num += (num[i] - 'A' + 10) * pow(scale, i);
			}

		}
		return to_string(last_num);
	}
	
}

string hex_test(string num, int scale) {
	if (num=="10" && scale>10) 
	{
		return "A";
	}
	else if (num == "11" && scale > 11) 
	{
		return "B";
	}
	else if (num == "12" && scale > 12)
	{
		return "C";
	}
	else if (num == "13" && scale > 13)
	{
		return "D";
	}
	else if (num == "14" && scale > 14)
	{
		return "E";
	}
	else if (num == "15" && scale > 15)
	{
		return "F";
	}
	else
	{
		return num;
	}
}

string convert_from_ten(string num, int scale) {
	if (scale == 10) {
		return num;
	}
	else {
		int int_num = stoi(num);
		string new_num;
		if (scale > 10) {
			while (int_num >= scale)
			{
				new_num += hex_test(num , scale);
				int_num = int_num / scale;
			}
			new_num += hex_test(num , scale);
			return mirror(new_num);
		}
		else {
			while (int_num >= scale)
			{
				new_num += to_string(int_num % scale);
				int_num = int_num / scale;
			}
			new_num += to_string(int_num % scale);
			return mirror(new_num);
		}
		
	}
	
}

string any_to_any(string num , int first_scale , int second_scale) {
	return convert_from_ten(convert_to_ten(num , first_scale) , second_scale);
}