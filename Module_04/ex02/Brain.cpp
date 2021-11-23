#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain appeared!" << std::endl;
}

Brain::Brain(const Brain &old)
{
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = old.ideas[i];
	}
	std::cout << "copy of Brain appeared!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain burned :(" << std::endl;
}

Brain Brain::operator = (const Brain &right_op)
{
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = right_op.ideas[i];
	}
	return (*this);
}

