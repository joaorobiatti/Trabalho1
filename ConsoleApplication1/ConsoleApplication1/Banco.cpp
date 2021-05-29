#include "Banco.h"

Banco::Banco(std::vector<Cliente*> cliente, std::vector<Conta*> contas, std::vector<Transferencia*> tranferencias) {
    this->cliente = cliente;
    this->contas = contas;
    this->tranferencias = tranferencias;
}
void Banco::saldoDoCliente(int cpf) {
    for (int i = 0; i < cliente.size(); i++) {
        if (cliente[i]->getCPF() == cpf) {
            saldoDaConta(cliente[i]);
        }
    }
}
void Banco::saldoDaConta(Cliente* cliente) {
    for (int i = 0; i < contas.size(); i++) {
        if (contas[i]->getCliente() == cliente) {
            contas[i]->imprimeSaldo();
        }
    }
}
int Banco::mostraValores() {
    int total = 0;
    for (int i = 0; i < contas.size(); i++) {
        total += contas[i]->getSaldo();
    }
    return total;
}
void Banco::listaClientes() {
    for (int i = 0; i < cliente.size(); i++) {
        std::cout << "Cliente " << i + 1 << std::endl;
        std::cout << "Nome do cliente:" << cliente[i]->getNome() << std::endl;
    }
}
void Banco::listaContas(int cpf) {
    for (int i = 0; i < contas.size(); i++) {
        if (contas[i]->getCliente()->getCPF() == cpf) {
            std::cout << "Numero da conta:" << contas[i]->getNumero() << std::endl;
            std::cout << "Nome do proprietario:" << contas[i]->getCliente()->getNome() << std::endl;
            contas[i]->imprimeSaldo();
        }
    }
}