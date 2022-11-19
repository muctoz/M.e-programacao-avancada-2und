#include <iostream>
#include <locale.h>

#include "Paciente.h"


using namespace std;


void Paciente::recebersenha(Paciente paciente) {
	cin >> Paciente::senha;
}
void Paciente::cadastraPaciente(Paciente paciente) {
	cout << "informe o nome do paciente: \n";
	cin >> Paciente::nome;
	cout << "informe o telefone do paciente: \n";
	cin >> Paciente::telefone;
	
}

void Paciente::imprimePaciente() {
	cout << "Senha: " << Paciente::senha <<  "\n" <<
	"Nome: " << Paciente::nome << "\n" <<
	"Telefone: " << Paciente::telefone << "\n" <<
	"Status: " << Paciente::status;
}
