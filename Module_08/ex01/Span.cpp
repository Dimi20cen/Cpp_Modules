#include "Span.hpp"

Span::Span(unsigned int given_N)
{
	N = given_N;
	already_in = 0;
}

Span::Span(const Span &obj_to_copy_from)
{
	N = obj_to_copy_from.N;
	already_in = obj_to_copy_from.already_in;
	for (unsigned int i = 0; i < already_in; i++)
	{
		vect[i] = obj_to_copy_from.vect[i];
	}
}

Span::~Span()
{
	vect.clear();
}

void Span::addNumber(int num)
{
	if (already_in < N)
	{
		vect.push_back(num);
		already_in += 1;
	}
	else
		throw std::exception();
}

int Span::shortestSpan(void)
{
	if (vect.size() <= 1)
		throw std::exception();
	int min_span = (vect.front() - vect.back());
	if (min_span < 0)
		min_span *= -1;

	int span;

	std::vector<int>::iterator it1;
	std::vector<int>::iterator it2;

	for (it1 = vect.begin(); it1 != vect.end(); it1++)
	{
		for (it2 = it1+1; it2 != vect.end(); it2++)
		{
			span = *it1 - *it2;
			if (span < 0)
				span *= -1;
			if (span < min_span)
				min_span = span;
		}
	}
	return min_span;
}

int Span::longestSpan(void)
{
	if (vect.size() <= 1)
		throw std::exception();
	int max_span = -1;
	int span;

	std::vector<int>::iterator it1;
	std::vector<int>::iterator it2;

	for (it1 = vect.begin(); it1 != vect.end(); it1++)
	{
		for (it2 = it1+1; it2 != vect.end(); it2++)
		{
			span = *it1 - *it2;
			if (span < 0)
				span *= -1;
			if (span > max_span)
				max_span = span;
		}
	}
	return max_span;
}

Span &Span::operator = (const Span &right_op)
{
	N = right_op.N;
	already_in = right_op.already_in;
	for (unsigned int i = 0; i < already_in; i++)
	{
		vect[i] = right_op.vect[i];
	}
	return (*this);
}

void	Span::addRandom(unsigned int nbr){
	srand(time(NULL));
	int				mystery = 0;
	unsigned int	i = 0;

	if (nbr < 1)
		throw std::exception();
	while (i < nbr){
		mystery = rand() % 10000000000 + 1;
		this->addNumber(mystery);
		i++;
	}
}