#include <iostream>
#include <string>
using namespace std;

#pragma once

class teacher {
private:
	string name;
	string department;
	int age;
	string post;

public:
	teacher();
	teacher(string name, string department , int age ,string post);
	teacher(teacher& other);
	~teacher();
	string GetName();
	string GetDep();
	int GetAge();
	string GetPost();
	string GetAll();
	void SetAll(string a, string b, int c, string d);
	void SetName(string a);
	void SetDep(string b);
	void SetAge(int c);
	void SetPost(string d);
};