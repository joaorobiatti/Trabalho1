#include "Conta.h"
#include "Transferencia.h"
Transferencia::Transferencia(int valor, Conta* origem, Conta* destino) {
    this->valor = valor;
    this->origem = origem;
    this->destino = destino;
}

int Transferencia::getValor()
{
    return this->valor;
}
