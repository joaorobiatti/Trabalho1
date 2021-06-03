#include "Cliente.h"
Cliente::Cliente(int cpf, string nome)
{
    this->cpf=cpf;
    this->nome=nome;
}
int Cliente::getCPF(){
    return this->cpf;
}
string Cliente::getNome(){
    return this->nome;
}
