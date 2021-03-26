#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void executeTookmouse() {
    try {
		ofstream tookmouse("tookmouse.bat"); // crea il file
		tookmouse << ("@echo off\n");
		tookmouse << (":1\n");
		tookmouse << ("RunDll32.exe user32.dll,SetCursorPos 50 75\n");
		tookmouse << ("RunDll32.exe user32.dll,SetCursorPos 70 30\n");
		tookmouse << ("goto 1");
		cout << "\nFile creato con successo!\n";
		tookmouse.close();
	} catch (...) {
		cout << "Errore durante la creazione del programma!";
	}
}