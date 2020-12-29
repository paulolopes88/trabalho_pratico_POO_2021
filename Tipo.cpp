#include "Tipo.h"
#include <iostream>

using namespace std;

Tipo::Tipo(int novoID, string novoNome) {
	ID = novoID;
	Nome = novoNome;
	cout << ">Passei em " << __FUNCTION__ << endl;
}

Tipo::~Tipo() {
	cout << ">Passei em " << __FUNCTION__ << endl;
}

int Tipo::getID() {
	return ID;
}

string Tipo::getNome() {
	return Nome;
}


void Tipo::setID(int novoID) {

}

void Tipo::setNome(string novoNome) {

}


void Tipo::setDados(int ID, string novoNome) {

}

void Tipo::Mostrar() {
	cout << ">Passei em " << __FUNCTION__ << endl;
	cout << "ID:\t" << ID << endl;
	cout << "Nome:\t" << Nome << endl;
}