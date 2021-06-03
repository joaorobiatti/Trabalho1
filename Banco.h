#ifndef BANCO_H
#define BANCO_H
#include "Cliente.h"
#include "Conta.h"
#include "Transferencia.h"
#include<vector>
using namespace std;
class Banco
{
private:
    vector <Cliente*> clientes;
    vector <Conta*> contas;
    vector <Transferencia*> transferencias;
public:
    Banco(vector <Cliente*> clientes,vector <Conta*> contas,vector <Transferencia*> transferencias);
    void saldoDoCliente(int cpf);
    void saldoDaConta(Cliente *cliente);
    int mostraValores();
    void listaClientes();
    void listaContas(Cliente *cliente);
};



#endif