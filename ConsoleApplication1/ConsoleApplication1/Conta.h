#pragma once
#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED
#include "Cliente.cpp"
class Conta {
    int numero;
    int saldo;
    Cliente* cliente;
public:
    Conta(int numero, int saldo, Cliente* cliente);
    Cliente* getCliente();
    int getNumero();
    int getSaldo();
    void imprimeSaldo();
};
#endif