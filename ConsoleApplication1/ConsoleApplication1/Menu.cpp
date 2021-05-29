#include "Menu.h"

menu::Menu::~Menu()
{
    // enquanto nao vazio
    while (!(itens.empty()))
    {
        // desaloca ponteiro do ultimo.
        delete (this->itens.back());
        // remove ponteiro do ultimo.
        this->itens.pop_back();
    }
}

const int menu::Menu::mostra() const
{
    std::cout << "Itens do menu:" << std::endl;

    for (int i(0); i < this->itens.size(); i++)
    {
        std::cout << '(' << i << ')' << ':' << ' ' << this->itens.at(i)->nome() << std::endl;
        // obs: .at() e operador [] são sinônimos.
    }
    std::cout << "Escolha um item pelo numero:" << std::endl;
    int itemIndice(-1);

    std::cin >> itemIndice;

    return (itemIndice);
}

const bool menu::Menu::executa()
{
    const int opcao(this->mostra());

    if ((opcao >= 0) && (opcao < this->itens.size()))
    {
        std::cout << std::endl;
        this->itens.at(opcao)->comportamento();
        std::cout << std::endl;
        return (true);
    }
    else
    {
        return (false);
    }
}
