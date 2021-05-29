#include "Conta.h"
#include <iostream>
#include <iomanip>
Conta::Conta(int numero, int saldo, Cliente* cliente) {
    this->numero = numero;
    this->saldo = saldo;
    this->cliente = cliente;

}
Cliente* Conta::getCliente() {
    return this->cliente;
}
int Conta::getNumero() {
    return this->numero;
}
int Conta::getSaldo() {
    return this->saldo;
}
void Conta::imprimeSaldo() {
    std::cout << "Saldo do cliente:" << std::setprecision(2) << std::fixed << (float)saldo / 100 << std::endl;
}