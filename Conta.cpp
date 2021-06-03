#include <iostream>
#include<iomanip>
#include "Conta.h"
using namespace std;
Conta::Conta(int numero, int saldo, Cliente *cliente)
{
    this->numero=numero;
    this->saldo=saldo;
    this->cliente=cliente;
}
int Conta::getNumero(){
    return this->numero;
}
int Conta::getSaldo(){
    return this->saldo;
}
Cliente* Conta::getCliente(){
    return this->cliente;
}
void Conta::imprimeSaldo(){
    cout <<"Saldo do cliente:"<<setprecision(2)<<fixed<<(float) saldo/100 <<endl;
}
