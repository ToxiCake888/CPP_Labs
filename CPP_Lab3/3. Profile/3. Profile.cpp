#include <iostream>	
using namespace std;


int main() {
	string name = "";
	int age;
	char slogan[30];

	cout << "insert name ";
	cin >> name;			

	cout << "insert age ";
	cin >> age;

	cout << "insert slogan(to end press $) ";
	cin.getline(slogan, 30 , '$');

	cout << " " << endl;
	cout <<"name " << name <<endl;
	cout << "age " << age << endl;
	cout << "slogan " << slogan ;
}			


//#include <iostream>
//
//using namespace std;
//
//const size_t max_len = 30;
//
//int main()
//{
//    string name = "";
//    int age;
//    char* str = new char[max_len + 1];
//
//    cout << "insert name ";
//    cin >> name;
//
//    cout << "insert age ";
//    cin >> age;
//
//    cout << "insert slogan ";
//    for (size_t i = 0; i != max_len; ++i)
//    {
//        cin >> str[i];
//        if (str[i] == '$')
//        {
//            str[i] = '\0';
//            break;
//        }
//    }
//
//    cout << "name " << name << endl;
//    cout << "age " << age << endl;
//    cout << "Entered slogan is: " << str << endl;
//
//    delete[] str;
//
//    return 0;
//}
