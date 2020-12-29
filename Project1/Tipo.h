#pragma once
#include <iostream>
#include <string>

using namespace std;

class Tipo
{

private:
	int ID;
	string Nome;

public:
	Tipo(int ID = 1, string Nome = "");
	virtual ~Tipo();

	//get e set
	int getID();
	string getNome();
	void setID(int novoID);
	void setNome(string novoNome);
	void setDados(int ID, string novoNome);
	void Mostrar();
};

