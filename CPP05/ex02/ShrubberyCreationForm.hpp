#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form {
private:
    const std::string _target;
public:
	ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm& copy);

    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);
    void execute(Bureaucrat const & executor) const;
};

#endif //SHRUBBERYCREATIONFORM_HPP
