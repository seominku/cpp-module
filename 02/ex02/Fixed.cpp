#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed()
{
	value = 0;
}
Fixed::~Fixed()
{
}
Fixed::Fixed(int number)
{
	value = number << bits;
}

Fixed::Fixed(float number)
{
	value = roundf(number * (1 << bits));
}

Fixed::Fixed(const Fixed &temp)
{
	*this = temp;
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
	return (this->value);
}

void Fixed::setRawBits(int const Raw)
{
	value = Raw;
}

Fixed &Fixed::operator=(const Fixed &temp)
{
	if (this != &temp)
		this->value = temp.getRawBits();
	return (*this);
}
std::ostream &operator<<(std::ostream &ost,const Fixed &Fix)
{
	ost << Fix.toFloat();
	return (ost);
}

bool Fixed::operator>(const Fixed &fix) const
{
	return (getRawBits() > fix.getRawBits());
}

bool Fixed::operator<(const Fixed &fix) const
{
	return (getRawBits() < fix.getRawBits());
}

bool Fixed::operator>=(const Fixed &fix) const
{
	return (getRawBits() >= fix.getRawBits());
}

bool Fixed::operator<=(const Fixed &fix) const
{
	return (getRawBits() <= fix.getRawBits());
}

bool Fixed:: operator==(const Fixed &fix) const
{
	return (getRawBits() == fix.getRawBits());
}

bool Fixed:: operator!=(const Fixed &fix) const
{
	return (getRawBits() != fix.getRawBits());
}

Fixed Fixed:: operator+(const Fixed &fix)
{
	Fixed temp(fix.toFloat() + toFloat());
	return (temp);
}

Fixed Fixed:: operator-(const Fixed &fix)
{
	Fixed temp(fix.toFloat() - toFloat());
	return (temp);
}

Fixed Fixed:: operator*(const Fixed &fix)
{
	Fixed temp(fix.toFloat() * toFloat());
	return (temp);
}

Fixed Fixed:: operator/(const Fixed &fix)
{
	Fixed temp(fix.toFloat() / toFloat());
	return (temp);
}

Fixed &Fixed::operator++(void)
{
	this->value++;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	value++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	value--;
	return (temp);
}

