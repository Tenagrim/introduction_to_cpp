#pragma once
#include "Form.hpp"
class RobotomyRequestForm : public Form
{
private:
    std::string target;
    RobotomyRequestForm();

public:
    RobotomyRequestForm(const std::string &target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &ref);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &ref);
    void execute(Bureaucrat const &executor) const;
};
