#include "Serialisation.hpp"

//returns the pointer as an integer
uintptr_t serialize(Data* ptr){
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int	main(){
	Data		data1;
	uintptr_t	raw;

	data1.number = -42;

	raw = serialize(&data1);
	Data *data2 = deserialize(raw);

	if (data2->number == data1.number)
		std::cout << "EQUALS" << std::endl;
	else
		std::cout << "UNEQUALS" << std::endl;

	std::cout << "[data1.number] = " << data1.number << std::endl;
	std::cout << "[data2->number] = " << data2->number << std::endl;

	return (0);
}
