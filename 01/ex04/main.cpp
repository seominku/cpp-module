
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::ifstream Ifs;
	std::ofstream Ofs;
	std::string outfile;
	std::string temp;
	std::string str1 = argv[2];
	std::string str2 = argv[3];
	size_t	pos = 0;

	if (argc != 4)
	{
		std::cout << "Argc Error" << std::endl;
		return (1);
	}
	if (argv[2][0] == '\0')
	{
		std::cout << "Error" << std::endl;
		return (1);
	}
	if (argv[3][0] == '\0')
	{
		std::cout << "Error" << std::endl;
		return (1);
	}
	Ifs.open(argv[1]);
	if (Ifs.fail())
	{
		std::cout << "Not Found File" << std::endl;
		return (1);
	}
	outfile = argv[1];
	outfile.append(".replace");
	char buff[outfile.length() + 1];
	outfile.copy(buff,outfile.length() + 1 ,0);
	Ofs.open(buff);
	if (Ofs.fail())
	{
		std::cout << "Not Found File" << std::endl;
		return (1);
	}
	while (true)
	{
		std::getline(Ifs, temp);
		pos = 0;
		while (true)
		{
			pos = temp.find(str1, pos);
			if (pos == std::string::npos)
				break;
			temp.erase(pos, str1.length());
			temp.insert(pos, str2);
			pos += str2.length();
		}
		Ofs << temp;
		Ofs << std::endl;
		if (Ifs.eof())
			break;
	}
}
