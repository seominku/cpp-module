
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Create Brain" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	*this = brain;
}

Brain::~Brain()
{
	std::cout << "Destroy Brain" << std::endl;
}
Brain &Brain::operator=(const Brain& brain)
{
	if (this != &brain)
		ideas[100] = brain.ideas[100];
	return (*this);
}

void Brain::SetIdea(std::string idea, int index)
{
	if (index < 0 || index >= 100)
	{
		std::cout << "Wrong Index" << std::endl;
		return ;
	}
	ideas[index] = idea;
}

std::string Brain::GetIdea(int index)
{
	if (index < 0 || index >= 100)
		return "Wrong Index";
	return ideas[index];
}