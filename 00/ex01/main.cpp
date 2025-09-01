
#include "Phonebook.hpp"
#include <string.h>

int main(void)
{
	PhoneBook phonebook;
	std::string cmd;
	while (1)
	{
		phonebook.PrintMenu();
		if (!(std::getline(std::cin, cmd)))
			return (1);
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