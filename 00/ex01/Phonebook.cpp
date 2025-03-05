
#include "Phonebook.hpp"


void PhoneBook::PrintMenu() const
{
	std::cout << "ADD SEARCH EXIT" << std::endl;
}

void PhoneBook::Add()
{
	_contacts[_index % 8].AddContact();
	_contacts[_index % 8].SetIndex(_index);
	_index++;
}

void PhoneBook::Search()
{
	if (_index == 0)
	{
		std::cout<< "Contact Empty" << std::endl;
		return ;
	}
	std::cout << "     index" << "|" << "first name" << "|" << " last name" << "|" << "  nickname" << std::endl;
	if (_index < 8)
	{
		for(int i = 0; i < _index; i++)
			_contacts[i].PrintContact(i + 1);
	}
	else
	{
		for(int i = 0; i < 8; i++)
			_contacts[i].PrintContact(i + 1);
	}
}

void PhoneBook::SelectIndex()
{
	int	number;

	if (_index == 0)
		return ;
	std::cout << "Insert Index" << std::endl;
	std::cin>>number;
	number -= 1;
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
	}
	if (number >= 0 && number < 8 && _index > number)
		_contacts[number].PrintOne();
}