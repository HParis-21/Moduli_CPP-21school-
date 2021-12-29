#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest", 72, 45), _target("Robot") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy), _target(copy._target) {
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {
	if (this == &copy)
		return (*this);
	Form::operator=(copy);
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() <= this->getGradeToExecute() && this->getSign() == true)
	{
		std::srand(time(NULL));
		int number = std::rand() % 2;
		if (number)
			std::cout << "*BRRRRRRRRRRRRRRRRR* " << _target << " has been robotomized" << std::endl;
		else
			std::cout << "Robotomize of " << _target << " has been failed" << std::endl;
	}
	else if (!(this->getSign()))
		throw ("The Form not signed!");
	else
		throw Bureaucrat::GradeTooLowException();
}
