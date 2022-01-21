#include "mutantstack.hpp"

int main(){
	std::cout << std::endl;
	std::cout << "--------- SUBJECT TEST ---------" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);

	mstack.push(17);
	std::cout << "Top of stack: " << mstack.top() << std::endl;
	std::cout << "Size of stack: " << mstack.size() << std::endl;
	std::cout << std::endl;

	std::cout << "------- Removing 1 element -------" << std::endl;
	mstack.pop();
	std::cout << "Size of stack: " << mstack.size() << std::endl;
	std::cout << std::endl;

	std::cout << "------ Adding 4 elements ------" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "Size of stack: " << mstack.size() << std::endl;
	std::cout << "Top of stack: " << mstack.top() << std::endl;
	std::cout << std::endl;


	std::cout << "------ Outputting stack ------" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);
	std::cout << std::endl;

	// EXTRA //
	std::cout << "--------- Create EMPTY stack ---------" << std::endl;
	MutantStack<int> empty_stack;
	if (empty_stack.empty())
		std::cout << "stack is empty" << std::endl;
	std::cout << std::endl;

	std::cout << "------ Pushing to EMPTY stack ------" << std::endl;
	for (int i = 0; i < 5; i++){
		empty_stack.push(i);
	}
	it = empty_stack.begin();
	ite = empty_stack.end();
	while (it != ite){
		std::cout << *it << std::endl;
		++it;
	}
	return (0);
}
