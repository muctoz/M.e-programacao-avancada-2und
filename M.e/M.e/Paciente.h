#include <iostream>
#include <locale.h>


using namespace std;


#pragma once
class Paciente
{
public:
	string cpf = "CPF n�o informado";
	string rg = "RG n�o informado";
	string senha = "Sem Senha";
	string telefone;
	string nome;
	string endereco = "Endereco vazio";
	string status = "Aguardando Senha";
	string resumo_triagem = "Vazio";
	string detalhes_consulta = "vazio";


	void imprimePaciente();
	void cadastraPaciente(Paciente paciente);
	void recebersenha(Paciente paciente);
};

