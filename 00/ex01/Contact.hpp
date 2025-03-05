#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact
{

public:
	void	AddContact();
	void	PrintContact(int i) const;
	void	SetIndex(int index);
	void	CheckLine();
	void	InsertBlank();
	void	CopyName();
	void	PrintOne();
	int		GetIndex();

private:
	int	_index;
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
private:
	std::string _copy_first_name;
	std::string _copy_last_name;
	std::string _copy_nickname;
};

#endif