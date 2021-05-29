#ifndef MENU_H
#define MENU_H

#include <vector>
#include <iostream>
#include "MenuItem.h"
namespace menu
{
	class Menu
	{
	private:
		std::vector<menu::MenuItem*> itens; // agrega��o
	public:
		inline Menu();

		//Menu(Menu& menu);       //   const Menu meuMenu(outroMenuParaCopiar); // ok
		//operator=(Menu& menu); //    meuMenu = outroMenuParaCopiar; //n�o pode, porque o meuMenu � const

		virtual ~Menu();

		inline void adiciona(MenuItem* menuItem);

		const int mostra() const;
		const bool executa();

	};
}
// inline no header.
menu::Menu::Menu() :itens()
{
}

// inline no header.
void menu::Menu::adiciona(MenuItem* menuItem)
{
	this->itens.push_back(menuItem);
}

#endif // MENU_H
