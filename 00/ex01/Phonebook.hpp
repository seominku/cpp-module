
#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
public:
	PhoneBook(): _index(0){};
	void Add();
	void Search();
	void SelectIndex();
	void PrintMenu() const;
private:
	Contact _contacts[8];
	int	_index;
};

#endif