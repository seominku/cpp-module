#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &temp);
	Fixed(int number);
	Fixed(float number);
	~Fixed();
	Fixed &operator=(const Fixed &temp);
	bool operator>(const Fixed &fix) const;
	bool operator<(const Fixed &fix) const;
	bool operator<=(const Fixed &fix) const;
	bool operator>=(const Fixed &fix) const;
	bool operator==(const Fixed &fix) const;
	bool operator!=(const Fixed &fix) const;
	Fixed operator+(const Fixed &fix);
	Fixed operator-(const Fixed &fix);
	Fixed operator*(const Fixed &fix);
	Fixed operator/(const Fixed &fix);
	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);
	int		toInt(void) const;
	float	toFloat(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	static	Fixed max(const Fixed &fix, const Fixed &fix2)
	{
		if (fix.getRawBits() > fix2.getRawBits())
			return (fix);
		else
			return (fix2);
	}
	static	Fixed max(Fixed &fix, Fixed &fix2)
	{
		if (fix.getRawBits() > fix2.getRawBits())
			return (fix);
		else
			return (fix2);
	}
	static Fixed min(const Fixed &fix, const Fixed &fix2)
	{
		if (fix.getRawBits() < fix2.getRawBits())
			return (fix);
		else
			return (fix2);
	}
	static Fixed min(Fixed &fix, Fixed &fix2)
	{
		if (fix.getRawBits() < fix2.getRawBits())
			return (fix);
		else
			return (fix2);
	}
	//max min 만들어야함
	//static Fixed Fixed&(const Fixed &fix1, const Fixed &fix2);
private:
	int value;
	static const int bits = 8;
};

std::ostream &operator<<(std::ostream &ost,const Fixed &Fix);

#endif