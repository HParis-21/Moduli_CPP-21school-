#include "Karen.hpp"

Karen::Karen()
{
	arv[0] = &Karen::debug;
	arv[1] = &Karen::info;
	arv[2] = &Karen::warning;
	arv[3] = &Karen::error;
}

Karen::~Karen() {}

void Karen::debug() {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info() {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning() {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error() {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	
	for (; i < 4; i++)
	{
		if (lvl[i] == level)
			break;
	}
	switch (i)
	{
		case 0:
			(this->*arv[0])();
		case 1:
			(this->*arv[1])();
		case 2:
			(this->*arv[2])();
		case 3:
		{
			(this->*arv[3])();
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}