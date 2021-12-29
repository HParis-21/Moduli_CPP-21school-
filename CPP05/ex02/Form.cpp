#include "Form.hpp"

Form::Form() : _name("Form 0"), _gradeToSign(150), _gradeToExecute(150), _sign(false) {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name),
_gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _sign(false) {
    if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw Form::GradeTooLowException();
    else if (_gradeToSign < 1 || _gradeToExecute < 1)
        throw Form::GradeTooHighException();
}

Form::~Form() {
    std::cout << *this << " deleted" << std::endl;
}

Form::Form(const Form &obj) : _name(obj._name),
_gradeToSign(obj._gradeToSign), _gradeToExecute(obj._gradeToExecute), _sign(obj._sign) {}

std::string Form::getName() const { return (_name); }

const int &Form::getGradeToSign() const { return (_gradeToSign); }

const int &Form::getGradeToExecute() const { return (_gradeToExecute); }

bool Form::getSign() const { return (_sign); }

Form& Form::operator=(const Form & other) {
	if (this == &other)
		return (*this);
	const_cast<std::string &>(this->_name) = other._name;
	const_cast<int &>(this->_gradeToSign) = other._gradeToSign;
	const_cast<int &>(this->_gradeToExecute) = other._gradeToExecute;
	this->_sign = other._sign;
	return (*this);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	try {
		if (_gradeToSign < bureaucrat.getGrade())
			throw GradeTooHighException();
		else {
			_sign = true;
			std::cout << bureaucrat.getName() << " signs " << _name << std::endl;
		}
	}
	catch (GradeTooHighException& e) {
		std::cout << bureaucrat.getName() << " cannot sign " << _name << " because grade of form too high" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Form& obj) {
    os << obj.getName() << ", form signGrade: " << obj.getGradeToSign() << ", executeGrade: " << obj.getGradeToExecute();
    return (os);
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("The Grade Form is too high!");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("The Grade Form is too low!");
}