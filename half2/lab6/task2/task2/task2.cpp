#include <iostream>
#include <string>
#include "header.h"

int main()
{
	teacher t1("t1","ktiib", 99 , "assistant");
	teacher t2("t2", "td", 99, "assistant professor");
	teacher t3(t2);
	teacher t4;
	t1.SetName("skibidi cherepushka");
	cout << t1.GetAll() << endl << t2.GetAll() << endl << t3.GetAll() << endl << t4.GetAll() << endl;
	t4.SetPost("skibidi ne cherepushka");
	cout << t1.GetName() << endl<<t4.GetPost()<<endl;
	teacher spisok[4] = {t1,t2,t3,t4}; 

	for (int i = 0; i < 4; i++) {
		if (spisok[i].GetPost() == "professor" or spisok[i].GetPost() == "assistant professor") {
			cout << spisok[i].GetName() << " " << spisok[i].GetDep();
		}
	}
}

