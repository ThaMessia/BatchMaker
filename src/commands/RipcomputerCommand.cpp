#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void executeRipcomputer() {
    try {
        ofstream ripcomputer("ripcomputer.bat");
        ripcomputer << ":1\n";
        ripcomputer << "start chrome\n" << "start chrome\n" << "shutdown -s -t 10";
        cout << "\nFile creato con successo!\n";
		ripcomputer.close();
    } catch (...) {
        cout << "Errore durante la creazione del programma!";
    } 
}