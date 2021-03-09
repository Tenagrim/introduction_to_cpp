#include"PresidentialPardonForm.hpp"
PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref) : Form(ref)
{}

PresidentialPardonForm    &PresidentialPardonForm::operator=(const PresidentialPardonForm &ref)
{
    (void)ref;
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::cout << target << " has been pardoned by Zafod Beeblebrox.\n";
}

Form    *PresidentialPardonForm::makeNew(const std::string &target)
{
    return (new PresidentialPardonForm(target));    
}