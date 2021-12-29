#include "PhoneBook_class.hpp"

PhoneBook::PhoneBook( void ) {}

PhoneBook::~PhoneBook( void ) {}

int	PhoneBook::add_contact( int ind )
{
	std::cout << "************************************" << std::endl;
	std::cout << "Fill in the fields to add a contact: " << std::endl;
	this->contacts[ind].create_contact();
	if (this->contacts[ind].check_null())
	{
		std::cout << "************************************" << std::endl;
		std::cout << "You cannot create an empty contact" << std::endl;
		std::cout << std::endl;
		return (ind);
	}
	else
	{
		std::cout << "************************************" << std::endl;
		std::cout << "New contact created with index " << ind + 1 << std::endl;
		std::cout << std::endl;
		return (ind + 1);
	}
}

int	PhoneBook::search_contact(void)
{
	int id = -1;
	int index;
	std::string	line;

	std::cout << "*********************************************" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "*********************************************" << std::endl;
	while (++id < BOOK_SIZE)
		if (!this->contacts[id].check_null())
			this->contacts[id].print_table(id);
	std::cout << "*********************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Enter the sequence number of the desired entry: ";
	std::getline(std::cin, line);
	if (!std::cin)
		exit(0);
	index = atoi(line.c_str());
	if (index < 1 || index > BOOK_SIZE)
	{
		std::cout << "Invalid index." << std::endl;
		return 0;
	}
	this->print_contact(index - 1);
	return 0;
}

int PhoneBook::print_contact(int ind)
{
	if (this->contacts[ind].check_null())
		std::cout << "Invalid index." << std::endl;
	else
		this->contacts[ind].print_all_contact();
	return (0);
}