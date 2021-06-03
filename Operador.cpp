#include<iostream>
#include "Operador.h"
using namespace std;
Operador::Operador(Banco* banco)
{
    this->banco=banco;
}
void Operador::listaClientes(){

}
void Operador::listaContas(){

}
void Operador::saldoDoCliente(){
    int cpf;
    cout<<"CPF do cliente para saldo:"<<endl;
    cin>>cpf;
    this->banco->saldoDoCliente(cpf);
}
void Operador::extratoDoCliente(){

}
void Operador::realizarTransferencia(){

}
void Operador::mostraValores(){
    cout<<"Total:"<<this->banco->mostraValores()<<endl;
}