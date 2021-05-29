#ifndef MENUITEM_H
#define MENUITEM_H

#include <string>
namespace menu
{
	class MenuItem
	{
	public:
		virtual void comportamento() = 0;
		virtual const std::string nome() = 0;
	};
}

#endif // MENUITEM_H
