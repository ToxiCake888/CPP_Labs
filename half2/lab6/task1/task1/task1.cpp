#include <iostream>
#include "header.h"
#include "news.cpp"
using namespace std;

int main() {
	News n1("fast", "Science day was held in RINH", "admini");
	News n2("normal", "There will be a conference in a week", "admin2");
	News n3("important", "Everyone needs to take lab assignments!", "admin2");
	News n4("normal", "Spring is coming", "admini");
	News n5 = n1;
	News n6(n2);
	News n7;

	n1.Print();
	n2.Print();
	n3.Print();
	n4.Print();
	n5.Print();
	n6.Print();
	n7.Print();
	cout << endl << endl;

	cout <<"desc 2 "<< n2.GetDescription() << endl;
	cout <<"avtor 1"<< n1.GetAvtor() << endl;
	cout << endl << endl;

	n1.SetType("norm");
	n3.SetDescription("skibidi dop es es");
	n6.SetAvtor("admini");
	n5.SetAll("important", "hihi","haha");
	n1.Print(); n3.Print();
	n5.Print();
	n6.Print();
	cout << endl << endl;

	return 0;
}