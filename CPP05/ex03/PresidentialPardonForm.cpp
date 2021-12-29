#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon", 25, 5), _target("President") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy), _target(copy._target) {
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	if (this == &other)
		return (*this);
	Form::operator=(other);
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() <= this->getGradeToExecute() && this->getSign() == true)
	{
		std::cout << "<" << this->_target << "> has been pardoned by Zafod Beeblebrox." << std::endl;
	}
	else if (!(this->getSign()))
		throw ("The Form not signed!");
	else
		throw Bureaucrat::GradeTooLowException();
}