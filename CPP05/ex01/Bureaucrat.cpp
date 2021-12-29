#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &other) { (*this) = other; }

const std::string &Bureaucrat::getName() const { return (_name); }

int Bureaucrat::getGrade() const { return (_grade); }

void Bureaucrat::inGrade() {
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::deGrade() {
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream & operator<< (std::ostream &out, const Bureaucrat & other) {
    out << other.getName() << ", bureaucrat grade " << other.getGrade();
    return (out);
}

Bureaucrat	 &Bureaucrat::operator= (const Bureaucrat & other) {
	if (this == &other)
		return (*this);
	const_cast<std::string &>(this->_name) = other._name;
	this->_grade = other._grade;
	return (*this);
}

void Bureaucrat::signForm(Form &form) {
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	if (!form.getSign())
		std::cout << this->getName() << " could not sign the form " << form.getName() << ", too low Grade: " << form.getGradeToSign() << std::endl;
	else
		std::cout << form.getName() << " form signed successfully" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("The Grade Bureaucrat is too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("The Grade Bureaucrat is too low!");
}
