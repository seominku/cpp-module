
#include "Harl.hpp"

void Harl::complain(std::string level)
{
	int	i;
	std::string Levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0; i < 4; i++)
	{
		if (level == Levels[i])
		{
			switch (i)
			{
			case 0:
				debug();
				break;
			case 1:
				info();
				break;
			case 2:
				warning();
				break;
			case 3:
				error();
				break;
			}
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignficant problems ]" << std::endl;
}

void Harl::debug(void)
{
	std::cout <<"[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my";
	std::cout << " 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout <<"[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money";
	std::cout << " You didn't put enough bacon in my burger! if you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout <<"[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free";
	std::cout << " I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout <<"[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}