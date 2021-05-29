#pragma once
#include "Banco.cpp"
class Operador {
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