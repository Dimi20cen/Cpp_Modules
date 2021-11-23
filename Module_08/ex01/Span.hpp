#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>

class Span
{
private:
	unsigned int		already_in;
	unsigned int		N;
	std::vector<int>	vect;
public:
	Span(unsigned int given_N);
	Span(const Span &obj_to_copy_from);
	~Span();

	Span &operator = (const Span &right_op);

	void addNumber(int num);
	int shortestSpan(void);
	int longestSpan(void);

	void addRandom(unsigned int nbr);
};


#endif