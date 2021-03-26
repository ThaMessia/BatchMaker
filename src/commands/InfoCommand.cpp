#include <iostream>
#include <fstream>
#include <string>

#include "./ConsoleUtils.h"

using namespace std;

void executeInfo() {
    setcolor(0x7);
	cout << "---" << endl;
	setcolor(0x4);
	cout << "BatchMaker e' un software ideato per la realizzazione di malware in Batch.\nIl progetto e' stato inizialmente sviluppato dal team di Sicurezza Informatica" << endl;
    cout << "Sapphire Security, che ha passato la cura del progetto alla comunità \"EnJava\". Il programma permette la creazione di " << 
            "malware altamente pericolosi scritti in Batch.\nLo sviluppatore principale e' ThaMessia" << endl;
    setcolor(0x7);
    cout << "---" << endl;
    setcolor(4);
}