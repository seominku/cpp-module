
#include <iostream>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		std::string *str = new std::string[argc - 1];
		for (int i = 0; i < (argc - 1); i++)
			str[i] = argv[i + 1];
		for (int j = 0; j < (argc - 1); j++)
		{
			for (unsigned long i = 0; i < str[j].length(); i++)
				str[j][i] = toupper(str[j][i]);
			std::cout << str[j];
		}
		std::cout << std::endl;
		delete[] str;
	}
	return (0);
}
