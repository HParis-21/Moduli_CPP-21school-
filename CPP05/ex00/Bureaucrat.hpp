#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
private:
    const std::string _name;
    int               _grade;
public:
	Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &other);
    ~Bureaucrat();

    const std::string	&getName() const;
    int 				getGrade() const;
    void				inGrade();
    void				deGrade();
    Bureaucrat &operator=(const Bureaucrat &other);

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

std::ostream	 &operator<<(std::ostream &out, const Bureaucrat &other);

#endif //BUREAUCRAT_HPP
