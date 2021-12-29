#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
	const std::string _target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& copy);

	RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
	void execute(Bureaucrat const & executor) const;
};

std::ostream	 &operator<<(std::ostream &out, const RobotomyRequestForm &other);

#endif //ROBOTOMYREQUESTFORM_HPP
