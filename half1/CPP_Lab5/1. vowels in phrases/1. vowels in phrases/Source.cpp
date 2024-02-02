#include <iostream>
#include <string>
using namespace std;

int vowelcounter(string arr[], int arr_len) {
	
	char vowels[] = {'a','e','y','u','i','o', 'A','E','Y','U','I','O'};
	int counter = 0;

	for (int i = 0; i < arr_len; i++) {
		string line = arr[i];
		for (char& letter : line) 
		{
			for (char& vowel :vowels) {
				if (letter == vowel) {
					counter += 1;
				}
			}
		}
	}
	cout << counter;
	return 1;
}