#include "Virus.h"
#include <iostream>

Virus::Virus(int novoID, string novoNome, string novoRaio, int novaPerig, int novaTaxC) {
	ID = novoID;
	Nome = novoNome;
	Raio = novoRaio;
	Perig = novaPerig;
	TaxC = novaTaxC;
	cout << ">Passei em " << __FUNCTION__ << endl;
}

Virus::~Virus() {
	cout << ">Passei em " << __FUNCTION__ << endl;
}

int Virus::getID() {
	return ID;
}

string Virus::getNome() {
	return Nome;
}

string Virus::getRaio() {
	return Raio;
}

int Virus::getPerig() {
	return Perig;
}

int Virus::getTaxC() {
	return TaxC;
}

void Virus::setID(int novoID) {

}

void Virus::setNome(string novoNome) {

}

void Virus::setRaio(string novaRaio) {

}

void Virus::setPerig(int novaPerc) {

}

void Virus::setTaxC(int novaTaxC) {

}

void Virus::setDados(int ID, string novoNome, string novaRaio, int novaPerig, int novaTaxC) {

}

void Virus::Mostrar() {
	cout << ">Passei em " << __FUNCTION__ << endl;
	cout << "ID:\t" << ID << endl;
	cout << "Nome:\t" << Nome << endl;
	cout << "Raio de contagio:\t" << Raio << endl;
	cout << "Perigosidade:\t" << Perig << endl;
	cout << "Taxa de contagio:\t" << Perig << endl;
}