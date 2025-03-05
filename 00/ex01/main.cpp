
#include "Phonebook.hpp"
#include <string.h>

int main(void)
{
	PhoneBook phonebook;
	std::string cmd;
	while (1)
	{
		phonebook.PrintMenu();
		std::cin>>cmd;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
		}
		if (cmd == "ADD")
			phonebook.Add();
		else if (cmd == "SEARCH")
		{
			phonebook.Search();
			phonebook.SelectIndex();
		}
		else if (cmd == "EXIT")
			break;
	}
}