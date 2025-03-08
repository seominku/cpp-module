
#include <iostream>

class Weapon
{
public:
	Weapon(std::string type) : _type(type){}
	void	setType(const std::string &type);
	void	getType() const;

private:
	std::string _type;
};