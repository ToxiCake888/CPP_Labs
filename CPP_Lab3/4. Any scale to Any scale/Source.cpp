#include <iostream>
#include <string>
using namespace std;

string mirror(string num) {
	string new_num;
	for (int i=0; i < num.length(); i++) {
		new_num.insert(0, to_string(num[i]-'0'));			// dumb -'0'
	}
	return new_num;
}
















//#include <iostream>
//#include <string>
//#include <math.h>
//using namespace std;
//
//string mirror(string num) {
//	string new_num;
//	for (int i=0; i < num.length(); i++) {
//		new_num.insert(0, to_string(num[i]-'0'));			// dumb -'0'
//	}
//	return new_num;
//}
//
//int convert(string num,int fs,int ss) {
//	int new_num, sum=0;
//	new_num=stoi(num);
//	cout << new_num;
//	for (int i = 0; i < num.length() ; i++) {
//		sum += new_num * pow(fs, i);
//	}
//	return sum;
//}