#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void executePcdown() {
    try {
        ofstream pcdown("pcdown.bat");
        pcdown << "shutdown -p";
        cout << "\nFile creato con successo!\n";
        pcdown.close(); 
    } catch (...) {
        cout << "Errore durante la creazione del programma!";
    }
}