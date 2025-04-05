#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(int number)
{
	std::cout << "Int constructor called" << std::endl;
	value = number << bits;
}

Fixed::Fixed(float number)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(number * (1 << bits));
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
		this->value = temp.getRawBits();
	return (*this);
}
std::ostream &operator<<(std::ostream &ost,const Fixed &Fix)
{
	ost << Fix.toFloat();
	return (ost);
}
int	Fixed::toInt(void) const
{
	return (value >> bits);
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(value) / (1 << bits));
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const Raw)
{
	value = Raw;
}
