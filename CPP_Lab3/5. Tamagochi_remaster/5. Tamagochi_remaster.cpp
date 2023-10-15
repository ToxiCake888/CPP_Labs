#include <iostream>
#include "Header.h"
#include <bitset>
using namespace std;

int main() {
	std::cout << std::boolalpha;
	bitset <4> stats("0000");
	while (true) {

	int choice;

	cout <<endl<< "1.round" << endl;
	cout << "2.statistics" << endl;
	choice = check_num();
	if (choice == 2) 
	{
		cout << stats << endl;								//killmepls    decode stats here IMPORTANT!!!!!!!!!!!!!!!!
		cout << "is eated an apple? " << decoder(stats[3]) <<endl;
		cout << "is taked cure? " << decoder(stats[2]) << endl;
		cout << "is clean? " << decoder(stats[1]) << endl;
		cout << "is happy? " << decoder(stats[0]) << endl;
	}
	else 
	{
		stats[3]=decoder(stat_0());
		stats[2] = decoder(stat_1());
		stats[1] = decoder(stat_2());
		stats[0] = decoder(stat_3());
	}
	}
	return 0;
	
}															//hate dis task