#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fix_number = 0;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &temp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = temp;
}

Fixed &Fixed::operator=(const Fixed &temp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &temp)
		this->fix_number = temp.getRawBits();
	return (*this);
}
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fix_number);
}

void Fixed::setRawBits(int const Raw)
{
	fix_number = Raw;
}
