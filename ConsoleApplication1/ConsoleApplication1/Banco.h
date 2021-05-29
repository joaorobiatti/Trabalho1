#pragma once
#ifndef BANCO_H_INCLUDED
#define BANCO_H_INCLUDED
#include <vector>
#include "Cliente.cpp"
#include "Conta.cpp"
#include "Transferencia.cpp"
class Banco {
    std::vector<Cliente*> cliente;
    std::vector<Conta*> contas;
    std::vector<Transferencia*> tranferencias;
public:
    Banco(std::vector<Cliente*> cliente, std::vector<Conta*> contas, std::vector<Transferencia*> tranferencias);
    void saldoDoCliente(int cpf);
    void saldoDaConta(Cliente* cliente);
    int mostraValores();
    void listaClientes();
    void listaContas(int cpf);

};
#endif