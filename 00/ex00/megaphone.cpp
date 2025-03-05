
#include <iostream>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int j = 1; argv[j]; j++)
		{
			for (int i = 0; i < static_cast<int>(strlen(argv[j])); i++)
				std::cout << static_cast<char>(toupper(argv[j][i]));
		}
		std::cout << std::endl;
	}
	return (0);
}
