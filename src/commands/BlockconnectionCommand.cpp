#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void executeBlockconnection() {
    try {
        ofstream blockconnection("blockconnection.bat");
        blockconnection << ("@Echo off  Ipconfig/renew");
        cout << "\nFile creato con successo!\n";
        blockconnection.close();
    } catch(...) {
        cout << "Errore durante la creazione del programma!";
    }
}