/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:38:46 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:38:49 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::stringstream ss;
    Form::execute(executor);
    std::cout << target << " has been pardoned by Zafod Beeblebrox.\n";
}
