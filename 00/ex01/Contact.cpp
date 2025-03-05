
#include "Contact.hpp"
#include <string.h>

void	Contact::AddContact()
{
	std::cout << "insert first name" << std::endl;
	std::cin>>this->_first_name;
	std::cout << "insert last number" << std::endl;
	std::cin>>this->_last_name;
	std::cout << "insert nickname" << std::endl;
	std::cin>>this->_nickname;
	std::cout << "insert phone number" << std::endl;
	std::cin>>this->_phone_number;
	std::cout << "insert darkest secret" << std::endl;
	std::cin>>this->_darkest_secret;
	CopyName();
	CheckLine();
	InsertBlank();
}

void	Contact::PrintContact(int i) const
{
	std::cout << "         " << i << "|";
	std::cout << _first_name << "|";
	std::cout << _last_name << "|";
	std::cout << _nickname;
	std::cout << std::endl;
}

void	Contact::SetIndex(int index)
{
	this->_index = index + 1;
}

int	Contact::GetIndex()
{
	return (this->_index);
}

void	Contact::CheckLine()
{
	if (_first_name.length() > 10)
	{
		_first_name.resize(9);
		_first_name.push_back('.');
	}
	if (_last_name.length() > 10)
	{
		_last_name.resize(9);
		_last_name.push_back('.');
	}
	if (_nickname.length() > 10)
	{
		_nickname.resize(9);
		_nickname.push_back('.');
	}
}

void	Contact::InsertBlank()
{
	std::string str;

	if (_first_name.size() < 10)
	{
		for(size_t i = 0 ; i < 10 - _first_name.size(); i++)
			str.push_back(' ');
		_first_name = str + _first_name;
	}
	str.clear();
	if (_last_name.length() < 10)
	{
		for(size_t i = 0 ; i < 10 - _last_name.size(); i++)
		str.push_back(' ');
		_last_name = str + _last_name;
	}
	str.clear();
	if (_nickname.length() < 10)
	{
		for(size_t i = 0 ; i < 10 - _nickname.size(); i++)
		str.push_back(' ');
		_nickname = str + _nickname;
	}
}

void	Contact::CopyName()
{
	_copy_first_name = _first_name;
	_copy_last_name = _last_name;
	_copy_nickname = _nickname;
}

void	Contact::PrintOne()
{
	std::cout << "First Name : " << _copy_first_name << std::endl;
	std::cout << "Last Name : " << _copy_last_name << std::endl;
	std::cout << "Nickname : " << _copy_nickname << std::endl;
	std::cout << "Phone Number : " << _phone_number << std::endl;
	std::cout << "Darkest Secret : " << _darkest_secret << std::endl;
}