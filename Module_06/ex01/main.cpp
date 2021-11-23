#include "Serialisation.hpp"

//returns the pointer as an integer
uintptr_t serialize(Data* ptr){
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int	main(){
	Data* data1 = new Data;
	uintptr_t data2;
	Data* data3 = new Data;

	data1->number = -42;


	std::cout << "[data1->number] = " << data1->number << std::endl;
	data2 = serialize(data1);

	// std::cout << data2 << std::endl;

	data3 = deserialize(data2);
	std::cout << "[data3->number] = " << data3->number << std::endl;


	if (data3 == data1)
		std::cout << "EQUALS" << std::endl;
	else
		std::cout << "UNEQUALS" << std::endl;
	return (0);
}
