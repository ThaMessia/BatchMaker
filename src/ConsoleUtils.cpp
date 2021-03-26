#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void setcolor(unsigned short color){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
}

void writeTextSquared(string s, unsigned short squarec, unsigned short txtc) {
	setcolor(squarec);
	cout << "[";
	setcolor(txtc);
	cout << s;
	setcolor(squarec);
	cout << "]" << endl;
}