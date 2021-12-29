#include "Contact_class.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void	Contact::create_contact()
{
	std::cout << "First name: ";
	std::getline(std::cin, this->f_name);
	if (!std::cin)
		exit(0);
	std::cout << "Last name: ";
	std::getline(std::cin, this->l_name);
	if (!std::cin)
		exit(0);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->nickname);
	if (!std::cin)
		exit(0);
	std::cout << "Phone number: ";
	std::getline(std::cin, this->phone);
	if (!std::cin)
		exit(0);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->secret);
	if (!std::cin)
		exit(0);
}

bool	Contact::check_null(void)
{
	bool check = true;
	if (!this->f_name.empty())
		check = false;
	if (!this->l_name.empty())
		check = false;
	if (!this->nickname.empty())
		check = false;
	if (!this->phone.empty())
		check = false;
	if (!this->secret.empty())
		check = false;
	return (check);
}

void	Contact::print_table(int id)
{
	std::cout << "│" << std::setw(WIDTH) << id + 1;
	if (this->f_name.size() > 10)
		std::cout << "│" << std::setw(WIDTH - 1) << this->f_name.substr(0, 9) << ".";
	else
		std::cout << "│" << std::setw(WIDTH) << this->f_name;
	if (this->l_name.size() > 10)
		std::cout << "│" << std::setw(WIDTH - 1) << this->l_name.substr(0, 9) << ".";
	else
		std::cout << "│" << std::setw(WIDTH) << this->l_name;
	if (this->nickname.size() > 10)
		std::cout << "│" << std::setw(WIDTH - 1) << this->nickname.substr(0, 9) << ".";
	else
		std::cout << "│" << std::setw(WIDTH) << this->nickname;
	std::cout << "│" << std::endl;
}

void	Contact::print_all_contact(void)
{
	std::cout << "*********************************************" << std::endl;
	std::cout << "Contact information" << std::endl;
	std::cout << "First name:     " << this->f_name << std::endl;
	std::cout << "Last name:      " << this->l_name << std::endl;
	std::cout << "Nickname:       " << this->nickname << std::endl;
	std::cout << "Phone number:   " << this->phone << std::endl;
	std::cout << "Darkest secret: " << this->secret << std::endl;
	std::cout << std::endl;
}