#include "Cliente.h"
Cliente::Cliente(std::string nome, int cpf) {
	this->nome = nome;
	this->cpf = cpf;
}
int Cliente::getCPF() {
	return cpf;
}
std::string Cliente::getNome() {
	return nome;
}