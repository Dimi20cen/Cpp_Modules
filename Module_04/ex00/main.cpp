#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal *wrongmeta = new WrongAnimal();
	const WrongAnimal *f = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	f->makeSound();
	wrongmeta->makeSound();

	delete meta;
	delete wrongmeta;
	delete j;
	delete f;
	delete i;

	return (0);
}