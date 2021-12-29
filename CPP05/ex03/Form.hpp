#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
protected:
    const std::string	_name;
    const int			_gradeToSign;
    const int           _gradeToExecute;
    bool				_sign;
public:
	Form();
    Form(const Form &obj);
    Form(std::string name, int gradeToSign, int gradeToExecute);
    ~Form();

    Form& operator=(const Form& other);
    void				beSigned(const Bureaucrat &bureaucrat);
    std::string			getName() const;
    const int			&getGradeToSign() const;
    const int			&getGradeToExecute() const;
    bool				getSign() const;
    virtual void        execute(Bureaucrat const & executor) const = 0;

    class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(){};
		virtual ~GradeTooHighException()  throw(){};

		virtual const char* what() const throw();
	};
    class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(){};
		virtual ~GradeTooLowException()  throw(){};

		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream& os, const Form& obj);

#endif //FORM_HPP
