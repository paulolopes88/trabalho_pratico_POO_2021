#pragma once
#include <iostream>
#include <string>

using namespace std;

class Virus
{

private:
	int ID;
	string Nome;
	string Raio;
	int Perig;
	int TaxC;

public:
	Virus(int ID = 1, string Nome = "", string Raio = "", int Perig = 18, int TaxC = 50);
	virtual ~Virus();

	//get e set
	int getID();
	string getNome();
	string getRaio();
	int getPerig();
	int getTaxC();
	void setID(int novoID);
	void setNome(string novoNome);
	void setRaio(string novoRaio);
	void setPerig(int novaPerig);
	void setTaxC(int novaTaxC);
	void setDados(int ID, string novoNome, string novoRaio, int novaPerig, int novaTaxC);
	void Mostrar();
};

