#include "awesome.hpp"

int filled = 0;

bool PhoneBooks::add_contact(int index)
{
	return (array_contacts[index].add_info());
}

void PhoneBooks::searching(void)
{
	int chosen;

	if (filled == 0)
		std::cout << "Phonebook is empty!\n\n";
	else
	{
		std::cout << "|     index|first Name| last name|  nickname|" << std::endl;
		for (int index = 0; index < filled; index++)
		{
			array_contacts[index].get_header(index);
		}
		std::cout << "Choose an available contant index: ";
		std::cin >> chosen;
		if (chosen - 1 >= 0 && chosen <= filled)
			array_contacts[chosen - 1].get_contact();
		else
			std::cout << "non-valid index\n";
	}
}	

void contacts::get_header(int index)
{
	int len;

	std::cout << "|";
	std::cout << "         " << index + 1 << "|";
	len = fname.length();
	if (len > 10)
	{
		for (int i = 0; i < 9; i++)
		{
			std::cout << fname[i];
		}
		std::cout << ".";
	}
	else
	{
		while (10 - len)
		{
			std::cout << " ";
			len++;
		}
		std::cout << fname;
	}

	len = lname.length();
	std::cout << "|";
	if (len > 10)
	{
		for (int i = 0; i < 9; i++)
		{
			std::cout << lname[i];
		}
		std::cout << ".";
	}
	else
	{
		while (10 - len)
		{
			std::cout << " ";
			len++;
		}
		std::cout << lname;
	}

	len = nickname.length();
	std::cout << "|";
	if (len > 10)
	{
		for (int i = 0; i < 9; i++)
		{
			std::cout << nickname[i];
		}
		std::cout << ".";
	}
	else
	{
		while (10 - len)
		{
			std::cout << " ";
			len++;
		}
		std::cout << nickname << "|";
	}

	std::cout << std::endl;
}

void contacts::get_contact(void)
{
	std::cout << "first name: " << fname << std::endl;
	std::cout << "last name: " << lname << std::endl;
	std::cout << "nickname: " << nickname << std::endl;
	std::cout << "number: " << number << std::endl;
	std::cout << "dankest secret: " << secret << "\n" << std::endl;
}

bool contacts::add_info(void)
{
	std::cin.ignore();
	std::cout << "Enter first name: ";
	std::getline(std::cin, fname);
	if (fname == "")
		return false;
	std::cout << "Enter last name: ";
	std::getline(std::cin, lname);
	if (lname == "")
		return false;
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	if (nickname == "")
		return false;
	std::cout << "Enter phone number: ";
	std::getline(std::cin, number);
	if (number == "")
		return false;
	std::cout << "Enter dankest secret :|: ";
	std::getline(std::cin, secret);
	if (secret == "")
		return false;
	return true;
}

int main(void)
{
	std::string	command;
	bool		exit = false;
	PhoneBooks	phonebook;
	int			i = 0;

	while (exit == false)
	{
		std::cout << "Enter: ADD, SEARCH or EXIT" << "\n >"; 
		std::cin >> command;
		if (command == "ADD")
		{
			std::cout << "\nYou chose ADD, contact " << i <<std::endl;
			if (phonebook.add_contact(i) == true)
			{
				i++;
				filled++;
			}
			else 
				std::cout << "\n!Error, You need to fill all fields!\n";
			if (i == 8)
				i = 0;
			if (filled == 9)
				filled = 8;
		}
		else if (command == "SEARCH")
		{
			phonebook.searching();
		}
		else if (command == "EXIT")
		{
			std::cout << "You chose EXIT, bb" << std::endl;
			exit = true;
		}
	}
	return 0;
}
