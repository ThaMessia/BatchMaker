#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <algorithm>
#include <cctype>

#include "./ConsoleUtils.h"
#include "commands/ListCommand.h"
#include "commands/SimplemalwareCommand.h"
#include "commands/PcdownCommand.h"
#include "commands/RipcomputerCommand.h"
#include "commands/EnjavaerrorCommand.h"
#include "commands/InfoCommand.h"
#include "commands/SilentmalwareCommand.h"
#include "commands/TookmouseCommand.h"
#include "commands/BlockconnectionCommand.h"
#include "commands/PcdestroyCommand.h"

using namespace std;

int main() {
	string select;

	setcolor(0x4);
	cout << "Benvenuto in Batch Maker! by Sapphire Security" << endl;
	cout << "Hai a disposizione un certo numero di exploit, che puoi creare scrivendo sul programma il \nnome dell'exploit che vuoi creare.\n\n" ;
	cout << "Per visualizzare la lista degli exploit digita \"list\"\n" << "Per ottenere informazioni sul " << 
			"prodotto digita \"info\"" << endl;

	while (true) {
		setcolor(0x4);
		cout << "\nScelta: ";
		setcolor(0x9);
		getline(cin, select);
		setcolor(0x4);
		transform(select.begin(), select.end(), select.begin(), [] (unsigned char c) { return tolower(c); });

		if (select == "list") { 
			executeListCmd();
			continue;
		}

		if (select == "simplemalware") {
			executeSimplemalware(); 
			continue;
		}

		if (select == "pcdown") { executePcdown(); continue; }

		if (select == "ripcomputer") { 
			executeRipcomputer(); 
			continue;
		}

		if (select == "enjavaerror") { executeEnjavaerror(); continue; }

		if (select == "info") {
			executeInfo();
			continue;
		}

		if (select == "clear") { system("cls"); continue; }

		if (select == "silentmalware") {
			executeSilentmalware();
			continue;
		}

		if (select == "tookmouse") { executeTookmouse(); continue; }

		if (select == "blockconnection") { 
			executeBlockconnection(); 
			continue; 
		}

		if (select == "pcdestroy") { executePcdestroy(); 
			continue; 
		}

		cout << "\nComando non trovato!" << endl;
	}

	return 0x0;
}
