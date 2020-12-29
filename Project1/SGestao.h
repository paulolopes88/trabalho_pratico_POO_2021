#pragma once
#include "Pessoa.h"
#include "Virus.h"
#include "Tipo.h"
#include <iostream>
#include <string>
#include <list>
#include <map>

//using namespace std;

class SGestao
{
private:
	string key;
	map<string, list<Pessoa*>> Dados;

public:
	SGestao();
	virtual ~SGestao();

	bool AddPessoa(string BI, string nome, string cidade, int idade);
	bool AddPessoa(Pessoa *P);
	bool Load(const string &fich);
	//void Mostrar();
	int Contar(Virus *X);
	Pessoa *PessoaMaisContagios();
	bool PessoaFonteContagio(const string &BI);
};