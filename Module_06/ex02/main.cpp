#include <stdlib.h>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int r = rand() % 3;

	if (r == 0)
	{
		std::cout << "A" << std::endl;
		return new A();
	}
	else if (r == 1)
	{
		std::cout << "B" << std::endl;
		return new B();
	}
	else
	{
		std::cout << "C" << std::endl;
		return new C();
	}
	return 0;
}

void identify(Base *p)
{
	A *abject = dynamic_cast<A *>(p);
	if (abject)
	{
		std::cout << "A" << std::endl;
		return;
	}

	B *bbject = dynamic_cast<B *>(p);
	if (bbject)
	{
		std::cout << "B" << std::endl;
		return;
	}

	C *cbject = dynamic_cast<C *>(p);
	if (cbject)
	{
		std::cout << "C" << std::endl;
		return;
	}
}

void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception)
	{
		std::cout << "ex found" << std::endl;
	}

	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception)
	{
		std::cout << "ex found" << std::endl;
	}

	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception)
	{
		std::cout << "ex found" << std::endl;
	}
}

int	main()
{
	srand(time(NULL));
	Base *base[10];

	std::cout << "---------------------------------------Initialize--------------------------------" << std::endl;
	for (int i = 0; i < 3; i++)
		base[i] = generate();

	std::cout << "--------------------------Identity according to pointer--------------------------" << std::endl;
	for (int i = 0; i < 3; i++)
		identify(base[i]);

	std::cout << "--------------------------Identity according to reference------------------------" << std::endl;
	for (int i = 0; i < 3; i++)
		identify(*base[i]);
	
    for(int i = 0; i < 3; ++i) {
        delete base[i];   
    }
}
