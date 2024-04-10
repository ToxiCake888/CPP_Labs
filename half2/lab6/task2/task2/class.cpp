
#include "header.h"
using namespace std;


teacher::teacher():name("noname"),department("no"),age(0),post("no"){}
teacher::teacher(string name, string department, int age, string post) :name(name), department(department), age(age), post(post){}
teacher::teacher(teacher& other) { name = other.name; department = other.department; age = other.age; post = other.post; }
teacher::~teacher(){ cout << "deleted"<<endl; }
string teacher::GetName() { return name; }
string teacher::GetDep(){ return department; }
int teacher::GetAge(){ return age; }
string teacher::GetPost(){ return post; }
string teacher::GetAll() { return name + " , " + department + " , " + to_string(age) + " , " + post; }
void teacher::SetAll(string a, string b, int c, string d){ name = a; department = b; age = c; post = d; }
void teacher::SetName(string a){ name = a; }
void teacher::SetDep(string b){ department = b; }
void teacher::SetAge(int c){ age = c; }
void teacher::SetPost(string d){ 
	const int scale = 4;
	string posts[scale] = {"assistant", "senior lecturer","assistant professor", "professor"};
	
	tryagainpost:
	bool ispost =false;
	for (int i = 0; i < scale; i++) {
		if (posts[i] == d) { ispost = true; }
	}
	if (ispost = false) {
		cout << "wrong input ,there is next posts:" << endl;
		for (int i = 0; i < scale; i++) {
			cout << posts[i] << "  ";
		}
		goto tryagainpost;
	}
}