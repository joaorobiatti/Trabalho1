#include "Operador.h"
Operador::Operador(Banco* banco) {
    this->banco = banco;
}
void Operador::listaClientes() {
    this->banco->listaClientes();
}
void Operador::listaContas() {
    int cpf;
    std::cout << "CPF do cliente para listagem de contas:" << std::endl;
    std::cin >> cpf;
    this->banco->listaContas(cpf);
}
void Operador::saldoDoCliente() {
    int cpf;
    std::cout << "CPF do cliente para saldo:" << std::endl;
    std::cin >> cpf;
    this->banco->saldoDoCliente(cpf);
}
void Operador::extratoDoCliente() {

}
void Operador::realizarTransferencia() {

}
void Operador::mostraValores() {
    std::cout << "Total:" << this->banco->mostraValores();
}