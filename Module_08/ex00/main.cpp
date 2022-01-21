#include "easyfind.hpp"

#include "easyfind.hpp"

int	main(){
	try{
		std::vector<int> tab(4, 2);// so it contains four 2s

		tab.push_back(6);
		tab.push_back(9);//now vector contains 2 2 2 2 6 9

		easyfind(tab, 2);
		easyfind(tab, 1);
	}
	catch (std::exception){
		std::cout << "Oh no, the element is not in the array !" << std::endl;
	}
}