#include <iostream>
#include "Banco.h"
using namespace std;
Banco::Banco(vector <Cliente*> clientes,vector <Conta*> contas,vector <Transferencia*> transferencias)
{
    this->clientes=clientes;
    this->contas=contas;
    this->transferencias=transferencias;
}
void Banco::saldoDoCliente(int cpf){
    for(int i=0;i<clientes.size();i++){
        if(clientes[i]->getCPF()==cpf){
            saldoDaConta(clientes[i]);
        }
    }
}
void Banco::saldoDaConta(Cliente *cliente){
    for(int i=0;i<contas.size();i++){
        if(contas[i]->getCliente()==cliente){
            contas[i]->imprimeSaldo();
        }
    }
}
int Banco::mostraValores(){
    int total=0;
    for(int i=0;i<contas.size();i++){
        total+=contas[i]->getSaldo();
    }
    return total;
}
void Banco::listaClientes(){
    for(int i=0;i<clientes.size();i++){
        cout<<"Cliente "<<i+1<<endl;
        cout<<"Nome:"<<clientes[i]->getNome()<<endl;
    }
}
void Banco::listaContas(Cliente *cliente){
    int cpf=cliente->getCPF();
    cout<<"Nome do proprietario:"<<cliente->getNome();
    for(int i=0;i<contas.size();i++){
        if(contas[i]->getCliente()->getCPF()==cpf){
            cout<<"Numero da conta:"<<contas[i]->getNumero()<<endl;
        }
    }
}
