#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "---------Copies--------" << std::endl;

	Cat basic;
	Cat tmp = basic;
	
	std::cout << "-----------------" << std::endl;

	int		size = 4;
	Animal	*tab[size];
	int		k = 0;
	while (k < (size / 2)){
		tab[k] = new Dog();
		k++;
	}
	while (k < size){
		tab[k] = new Cat();
		k++;
	}

	std::cout << "-----------------" << std::endl;

	while (--k >= 0)
		delete tab[k];

	delete j;//should not create a leak
	delete i;
}
