#include "PhoneBook_class.hpp"

int main(void)
{
	std::string	command;
	Contact	cont;
	PhoneBook	book;
	int			ind = 0;

	std::cout << "Enter one of the three commands: ADD, SEARCH, EXIT" << std::endl;
	while(1)
	{
		std::cout << "Enter your command: ";
		std::getline(std::cin, command);
		if (!std::cin)
			break;
		if (command == "ADD")
		{
			ind = book.add_contact(ind);
			if (BOOK_SIZE == ind)
				ind = 0;
		}
		else if (command == "SEARCH")
		{
			book.search_contact();
		}
		else if (command == "EXIT")
		{
			std::cout << "Exited!" << std::endl;
			break;
		}
		else
			std::cout << "Enter one of the three commands: ADD, SEARCH, EXIT" << std::endl;
	}
	return (0);
}

