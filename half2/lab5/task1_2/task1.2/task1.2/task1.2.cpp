#include <iostream>
#include <windows.h>
#include "task1.2.h"
#include <WinUser.h>
using namespace std;

void func(Screen& myscreen) {
	static int i = 1;
	cout << "длина экрана "<<i<<" : ";
	cin >> myscreen.length;
	cout << endl;
	cout << "ширина экрана " << i << " : ";
	cin >> myscreen.width;
	cout << endl;
}

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Screen screen1, screen2;
	func(screen1);

	screen2.length = GetSystemMetrics(SM_CXSCREEN);
	screen2.width = GetSystemMetrics(SM_CYSCREEN);

	cout << "Экран 2 ,длина : " << screen2.length << " pixels" << endl;
	cout << "Ширина 2-го экрана: " << screen2.width << " pixels" << endl;

	cout << "Общее кол-во пикселей для 1-го экрана: " << screen1.length * screen1.width<<endl;
	cout << "Общее кол-во пикселей для 2-го экрана: " << screen2.length * screen2.width << endl;
	return 0;
}