#pragma once
#ifndef TRANSFERENCIA_H_INCLUDED
#define TRANSFERENCIA_H_INCLUDED
#include "Conta.cpp"
class Transferencia {
    int valor;
    Conta* origem;
    Conta* destino;
public:
    Transferencia(int valor, Conta* origem, Conta* destino);
    int getValor();
};
#endif