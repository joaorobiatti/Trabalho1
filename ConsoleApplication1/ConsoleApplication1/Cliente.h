#pragma once
#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
#include <string>
class Cliente {
    std::string nome;
    int cpf;
public:
    Cliente(std::string nome, int cpf);
    int getCPF();
    std::string getNome();
};
#endif