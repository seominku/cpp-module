#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact
{

public:
	void	AddContact();
	void	PrintContact(int i) const;
	void	SetIndex(int index);
	void	PrintOne();

private:
	void	CopyName();
	void	CheckLine();
	void	InsertBlank();
	int	_index;
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
	std::string _copy_first_name;
	std::string _copy_last_name;
	std::string _copy_nickname;
};

#endif