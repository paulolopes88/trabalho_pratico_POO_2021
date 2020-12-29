#include "SGestao.h"
#include "Pessoa.h"
#include "Virus.h"
#include "Tipo.h"
#include "Uteis.h"
#include <iostream>
#include <fstream>

SGestao::SGestao() {
	cout << ">Passei em " << __FUNCTION__ << endl;
}

SGestao::~SGestao() {
	//11. Implemente o destrutor da classe SGestao, que obviamente deve libertar toda a mem�ria ocupada.

	/*for (map<string, list<Pessoa*>>::iterator it = Dados.begin(); it != Dados.end(); ++it)
	{
		delete (it->second);
	}
	Dados.clear();*/
	cout << ">Passei em " << __FUNCTION__ << endl;
}

bool SGestao::AddPessoa(string BI, string nome, string cidade, int idade) {
	Pessoa *P = new Pessoa(BI, nome, cidade, idade);
	//Dados[cidade].push_front(P);
	return AddPessoa(P);
}
bool SGestao::AddPessoa(Pessoa *P) {
	Dados[P->getCidade()].push_front(P);
	return true;
}


bool SGestao::Load(const string &fich) {
	string str;
	// abre o ficheiro para leitura
	ifstream Ficheiro(fich.c_str());
	while (getline(Ficheiro, str)) { // ler todo o conteudo linha a linha
		//cout << str << endl;
		Uteis U;  // partir por ;
		U.split(str, "\t");
		string BI = U.GetElement(0);
		string nome = U.GetElement(1);
		string cidade = U.GetElement(2);
		int idade = atoi(U.GetElement(3).c_str());  //stoi

		AddPessoa(new Pessoa(BI, nome, cidade, idade));
	}
	Ficheiro.close();
	return true;
}

/*void SGestao::Mostrar() {
	cout << "Numero de pessoas:\t" << Dados.size() << endl;

	for (map<string, list<Pessoa*>>::iterator it = Dados.begin(); it != Dados.end(); ++it) {
		cout << "Lista Pessoas : " << it->first << endl;
		for (list<Pessoa*>::iterator itList = it->second.begin(); itList != it->second.end(); ++itList)
			//(*itList)->getNome();
			cout << "Nome:\t" << (*itList)->getNome() << endl;
	}
}*/


int SGestao::Contar(Virus *X) {
	//2. Contar o n�mero de v�rus de um dado Tipo;
	return 0;
}

Pessoa *SGestao::PessoaMaisContagios() {
	//3. Determinar a pessoa que mais cont�gios provocou.
	return 0;
}

bool SGestao::PessoaFonteContagio(const string &BI) {
	//4. Verificar se uma dada pessoa esteve na base de algum cont�gio;
	return 0;
}

int SGestao::Memoria() {
	//5. Determinar toda a mem�ria ocupada; 
	return 0;
}

void SGestao::PessoasContagiadas(list<Pessoa *> &L) {
	//6. Determinar as pessoas que est�o contagiadas. 
}

Tipo SGestao::VirusMaisActivo() {
	//7. Determinar qual o tipo de v�rus que est� mais activo;
	return 0;
}

void SGestao::PessoasMaisUmVirus(list<Pessoa *> &L) {
	//8. Determinar as pessoas que podem ter mais do que um v�rus; 
}

void SGestao::RemoverVirus(Virus *X) {
	//9. Pode acontecer que um dado v�rus seja extinto!, ent�o todas as pessoas que t�m esse v�rus devem ficar bem;
}

void SGestao::EscreverXML(const string &fich_xml) {
	//10. Gravar para ficheiro em formato XML um dado modelo; 
}

string SGestao::CidadeMaisCasos() {
	//12. Determinar a cidade que est� a ser mais afetada; 
	return 0;
}

bool SGestao::AlertasAsPessoasProximas(int N, double R) {
	//13. Se N ou mais pessoas estiverem muito juntas(num raio inferior a R) as pessoas devem ser alertadas;
	return 0;
}

int SGestao::EscalaoIdadeMaisAfectado() {
	//14. Determinar qual o escal�o de idades mais afetada; (Considera Escala 0 - [0, 9]; 1 - [10, 19]; 2 - [20, 29]; etc
	return 0;
}

/*List<Ponto *> *SGestao::PossivelIr_A_B(Ponto &A, Ponto &B) {
	15. Ser� que � poss�vel ir de um ponto A a um ponto B sem passar por posi��es onde
		est�o pessoas infetadas ? Se for poss�vel, deve devolver a lista das posi��es por onde se
		pode passar;
}*/

/*List<Ponto *> *SGestao::Possivel_Zona_Ir_A_B(Ponto &A, Ponto &B) {
	16. Ser� que � poss�vel ir de um ponto A a um ponto B sem passar por dentro de qualquer
		zona de cont�gio ? Se for poss�vel, deve devolver a lista das posi��es por onde se pode
		passar;
}*/