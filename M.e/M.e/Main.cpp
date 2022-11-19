#include <iostream>
#include <locale.h>
#include "Paciente.h"
#include <string>

using namespace std;


int main() {
	setlocale(LC_ALL, "pt_BR.UTF-8");
	int escolha;
	Paciente paciente;
	string listaPacientes[12][9] = {};
	int contador = 0;
	int senha = 1;
	while (true)
	{
		
		cout << "Menu" << "\n"
			"0- Cadastrar Paciente" << "\n"
			"1- Receber Senha" << "\n"
			"2- Triagem" << "\n"
			"3- Consulta" << "\n"
			"4- Listar Pacientes" << "\n"
			"5- Encerrar Espediente";

		cin >> escolha;
		if (escolha == 0) {
			paciente.cadastraPaciente(paciente);
			listaPacientes[contador][0] = paciente.senha;
			listaPacientes[contador][1] = paciente.nome;
			listaPacientes[contador][2] = paciente.telefone;
			listaPacientes[contador][3] = paciente.rg;
			listaPacientes[contador][4] = paciente.cpf;
			listaPacientes[contador][5] = paciente.endereco;
			listaPacientes[contador][6] = paciente.status;
			listaPacientes[contador][7] = paciente.resumo_triagem;
			listaPacientes[contador][8] = paciente.detalhes_consulta;
			contador = contador + 1;
		}
		else if (escolha == 1 ) {
			for (int i = 0; i <= 12; i++) {
				if (listaPacientes[i][0] == "Sem Senha") {
					listaPacientes[i][0] = to_string(senha);
					listaPacientes[i][6] = "Aguardando Triagem!";
					senha = senha + 1;
				}
			}
		}
		else if (escolha == 2) {
			string nome,CPF, RG,endereco,resumo_triagem;
			cout << "informe o nome do paciente: \n";
			cin >> nome;
			for (int i = 0; i <= 12; i++) {
				if (listaPacientes[i][1] == nome && listaPacientes[i][6] == "Aguardando Triagem!") {
					cout << "Informe o CPF: \n";
					cin >> CPF;
					cout << "Informe o RG: \n";
					cin >> RG;
					cout << "infoem o Endereço: ";
					cin >> endereco;
					cout << "Breve resumo para triagem: \n";
					cin >> resumo_triagem;
					
					listaPacientes[i][8] = resumo_triagem;
					listaPacientes[i][4] = CPF;
					listaPacientes[i][5] = endereco;
					listaPacientes[i][3] = RG;
					listaPacientes[i][6] = "Aguardando Consulta!";
				}
			}
		}
		else if (escolha == 3) {
			string nome,detalhes_consulta;
			cout << "informe o nome do paciente: \n";
			cin >> nome;
			for (int i = 0; i <= 12; i++) {
				if (listaPacientes[i][1] == nome && listaPacientes[i][6] == "Aguardando Consulta!") {
					cout << "informe os detalhes da consulta: \n";
					cin >> detalhes_consulta;
					listaPacientes[i][8] = detalhes_consulta;
					listaPacientes[i][6] = "Consulta Finalizada!";
				}
			}
		}
		else if (escolha == 4) {
			for (int i = 0; i < contador; i++) {
				for (int k = 0; k <= 9; k++) {
					cout << listaPacientes[i][k] << "\n";
				}
			}
		}
		else if (escolha == 5){
			break;
		}
	}
	



	
	


}