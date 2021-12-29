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
	std::cout << "I cannot believe adding extrabacon cost more mone." << std::endl;
}

void Karen::warning() {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void Karen::error() {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (lvl[i] == level)
		{
			(this->*(arv[i]))();
			return;
		}
	}
	std::cout << "Error complain" << std::endl;
}