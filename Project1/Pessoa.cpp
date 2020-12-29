#include "Pessoa.h"
//#include <iostream>

Pessoa::Pessoa(string novoBI, string novoNome, string novaCidade, int novaIdade) {
	BI = novoBI;
	Nome = novoNome;
	Cidade = novaCidade;
	Idade = novaIdade;
	cout << ">Passei em " << __FUNCTION__ << endl;
}

Pessoa::~Pessoa() {
	cout << ">Passei em " << __FUNCTION__ << endl;
}

string Pessoa::getBI() {
	return BI;
}

string Pessoa::getNome() {
	return Nome;
}

string Pessoa::getCidade() {
	return Cidade;
}

int Pessoa::getIdade() {
	return Idade;
}

void Pessoa::setBI(string novoBI) {

}

void Pessoa::setNome(string novoNome) {

}

void Pessoa::setCidade(string novaCidade) {

}

void Pessoa::setIdade(int novaIdade) {

}

void Pessoa::setDados(string BI, string novoNome, string novaCidade, int novaIdade) {

}

void Pessoa::Mostrar() {
	cout << ">Passei em " << __FUNCTION__ << endl;
	cout << "BI:\t" << BI << endl;
	cout << "Nome:\t" << Nome << endl;
	cout << "Cidade:\t" << Cidade << endl;
	cout << "Idade:\t" << Idade << endl;
}