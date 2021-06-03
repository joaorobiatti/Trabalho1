#ifndef CONTA_H
#define CONTA_H
#include "Cliente.h"
class Conta
{
private:
    int numero;
    int saldo;
    Cliente *cliente;
public:
    Conta(int numero, int saldo, Cliente *cliente);
    int getNumero();
    int getSaldo();
    Cliente* getCliente();
    void imprimeSaldo();
};
#endif