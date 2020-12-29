#include <iostream>

using namespace std;

#include "SGestao.h"
int main()
{

	SGestao SG;
	cout << "POO PP 2021!" << endl;
	char x;
	int n, escolha;
	
		cout << "\n\n   # MENU ----------------------------------------------------#" << endl;
		cout << "\n   | --------------------------------------------------------- |" << endl;
		cout << "\n   | (A) Lancar um virus                                       |" << endl;
		cout << "\n   | (V) Mostrar dados do sistema                              |" << endl;
		cout << "\n   | (F) Mostrar falecimentos                                  |" << endl;
		cout << "\n   | (Q) Mostrar pessoas em quarentena                         |" << endl;
		cout << "\n   | (I) Mostrar pessoas infetadas                             |" << endl;
		cout << "\n   | --------------------------------------------------------- |" << endl;
		cout << "\n   | (S) Sair do programa                                      |" << endl;
		cout << "\n   #-----------------------------------------------------------#\n" << endl;
		do {
		cout << "\n> ";
		cin >> x;
		switch (x) {
		case 'A':
			cout << "\n (A) Lancar um virus" << endl;
			break;
		case 'V':
			cout << "\n (V) Mostrar dados do sistema" << endl;
			x = -1;
			break;
		case 'F':
			cout << "\n (F) Mostrar falecimentos" << endl;
			x = -1;
			break;
		case 'Q':
			cout << "\n (Q) Mostrar pessoas em quarentena" << endl;
			x = -1;
			break;
		case 'I':
			cout << "\n (I) Mostrar pessoas infetadas" << endl;
			x = -1;
			break;
		}
	}while (x != 'S' || x != 's');
	
	return 1;


	//SG.Load("pessoas.txt");
	//SG.Mostrar();
	//SG.Run();
}
