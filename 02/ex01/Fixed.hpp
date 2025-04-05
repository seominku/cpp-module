
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
	int		toInt(void) const;
	float	toFloat(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int value;
	static const int bits = 8;
};

std::ostream &operator<<(std::ostream &ost,const Fixed &Fix);