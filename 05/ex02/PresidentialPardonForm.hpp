#pragma once
#include "Form.hpp"
#include <string>
class PresidentialPardonForm : public Form
{
private:
    std::string target;
    PresidentialPardonForm();
public:
    ~PresidentialPardonForm();
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &ref);
    PresidentialPardonForm  &operator=(const PresidentialPardonForm &ref); 
	void		    execute(Bureaucrat const & executor) const;
};