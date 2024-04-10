#include <iostream>
#include "header.h"
using namespace std;

News::News(char* i, char* j, char* a) :type(i), description(j), avtor(a) { cout << "obj created"; }

News::~News() { cout << "obj deleted" << endl; }
News::News(const News& other) {
	cout << "copy obj create" << endl;
	type = other.type;
	description = other.description;
	avtor = other.avtor;
}
News::News():type("normal"),description("no"),avtor("no") {}

void News::Print()const { cout << avtor << endl << type << endl << description << endl << endl; }

char* News::GetDescription()const { return description; }

char* News::GetAvtor()const { return avtor; }

void News::SetType(char* i) {
    type = i;
}
void News::SetDescription(char* j) {
    description = j;
}
void News::SetAvtor(char* a) { 
    avtor = a;
}
void News::SetAll(char* i, char* j,  char* a){
	avtor = a;
	description = j;
	type = i;
}