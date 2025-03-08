
#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::ifstream in("a");
	std::string s;

	in.is_open();
	in >> s;
	std::cout << s << std::endl;
}
