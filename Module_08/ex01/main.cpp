#include "Span.hpp"

int main(){
	try{
		Span sp = Span(5);

		sp.addNumber(-10);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(199);
		
		std::cout << "shortest span is: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span is: " << sp.longestSpan() << std::endl;

		Span rand = Span(1000);

		rand.addRandom(1000);

		std::cout << "shortest span is: " <<rand.shortestSpan() << std::endl;
		std::cout << "longest span is: " <<rand.longestSpan() << std::endl;
		
		rand.addNumber(42);// should throw exception, it tries to add past the N
	}
	catch (std::exception){
		std::cout << "exception thrown OH NOOO!" << std::endl;
	}
}