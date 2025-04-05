
#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &temp);
	~Fixed();
	Fixed &operator=(const Fixed &temp);


	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int fix_number;
	static const int bits = 8;
};
