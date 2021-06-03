#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using namespace std;
class Cliente
{
private:
    int cpf;
    string nome; 
public:
    Cliente(int cpf, string nome);
    int getCPF();
    string getNome();
};
#endif