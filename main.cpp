#include<iostream>
#include<vector>
#include "Cliente.cpp"
#include "Conta.cpp"
#include "Transferencia.cpp"
#include "Banco.cpp"
#include "Operador.cpp"
using namespace std;

int main()
{
    vector <Cliente*> clientes;
    vector <Conta*> contas;
    vector <Transferencia*> transferencias;
    Banco banco1(clientes,contas,transferencias);
    Cliente cliente1(22445533,"Cezar");
    Conta conta1(1,100000,&cliente1);
    cout<<"Numero da conta:"<<conta1.getNumero()<<endl;
    conta1.imprimeSaldo();
    
}
