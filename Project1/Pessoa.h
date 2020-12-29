#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pessoa
{

private:
	string BI;
	string Nome;
	string Cidade;
	int Idade;

public:
	Pessoa(string BI ="", string Nome = "", string Cidade = "", int Idade = 18);
	virtual ~Pessoa();

	//get e set
	string getBI();
	string getNome();
	string getCidade();
	int getIdade();
	void setBI(string novoBI);
	void setNome(string novoNome);
	void setCidade(string novaCidade);
	void setIdade(int novaIdade);
	void setDados(string BI, string novoNome, string novaCidade, int novaIdade);
	void Mostrar();
};

