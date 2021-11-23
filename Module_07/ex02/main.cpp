#include "Array.hpp"

int	main(void){
	try{
		Array<int> zeroArray;
		Array<int> BigArray(4);

		std::cout << "Number of elements in the first array : " << zeroArray.size() << std::endl;
		std::cout << "Number of elements in the BigArray array : " << BigArray.size() << std::endl;

		BigArray[0] = 0;
		BigArray[1] = 69;
		BigArray[2] = 3;
		BigArray[3] = 42;

		Array<int> copiedArray(BigArray);

		std::cout << "Number of elements in the copiedArray : " << copiedArray.size() << std::endl;
		std::cout << "copiedArray[3] = " << copiedArray[3] << std::endl;

		zeroArray[0] = 21;//causing the exception
	}
	catch (std::exception & e){
		std::cout << "yo index you chose doesnt exist :(" << std::endl;
	}

}