#ifndef OPERADOR_H
#define OPERADOR_H
#include "Banco.h"
class Operador
{
private:
    Banco* banco;
public:
    Operador(Banco* banco);
    void listaClientes();
    void listaContas();
    void saldoDoCliente();
    void extratoDoCliente();
    void realizarTransferencia();
    void mostraValores();
};


#endif