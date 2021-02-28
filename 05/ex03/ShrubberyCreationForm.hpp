#pragma once
#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm : public Form
{
private:
    std::string target;
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(const std::string &target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &ref);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ref); 
	void		    execute(Bureaucrat const & executor) const;
	static Form			*makeNew(const std::string &target);
};
