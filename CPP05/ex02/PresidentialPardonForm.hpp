#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
    const std::string _target;
public:
	PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm& copy);

    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
    void execute(Bureaucrat const & executor) const;
};

std::ostream	 &operator<<(std::ostream &out, const PresidentialPardonForm &other);

#endif //PRESIDENTIALPARDONFORM_HPP
