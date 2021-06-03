#ifndef TRANSFERENCIA_H
#define TRANSFERENCIA_H
#include "Conta.h"
class Transferencia
{
private:
    int valor;
    Conta* origem;
    Conta* destino;

public:
    Transferencia(int valor,Conta* origem,Conta* destino);
    int getValor();
};



#endif