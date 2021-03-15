/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:39:12 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:39:13 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::TableEntry::TableEntry()
{}

Intern::TableEntry::TableEntry(const std::string &ident, Form *(*maker)(std::string const &))
{
    this->maker = maker;
    this->identifier = ident;
    this->next = 0;
}

Intern::TableEntry::~TableEntry()
{}

Intern::TableEntry::TableEntry(const TableEntry &ref)
{
    (void)ref;
}

void        Intern::TableEntry::setNext(TableEntry *new_next)
{
    this->next = new_next;
}

Intern::TableEntry        *Intern::TableEntry::getNext() const
{
    return this->next;
}

Intern::TableEntry &Intern::TableEntry::operator=(const TableEntry &ref)
{
    (void)ref;
    return (*this);
}

Form        *Intern::TableEntry::makeForm(std::string const &target)
{
    return (maker(target));
}

std::string const &Intern::TableEntry::getIdent() const
{
    return identifier;
}

Intern::Intern()
{
    table = 0;
    std::cout << "Random intern was created\n";
    addEntry("PresidentialPardonForm", PresidentialPardonForm::makeNew);
    addEntry("presidential pardon form", PresidentialPardonForm::makeNew);
    addEntry("presidential pardon", PresidentialPardonForm::makeNew);
    addEntry("PP89", PresidentialPardonForm::makeNew);
    addEntry("PPF", PresidentialPardonForm::makeNew);
    addEntry("ppf", PresidentialPardonForm::makeNew);

    addEntry("ShrubberryCreationForm", ShrubberyCreationForm::makeNew);
    addEntry("shrubberry creation form", ShrubberyCreationForm::makeNew);
    addEntry("shrubberry creation", ShrubberyCreationForm::makeNew);
    addEntry("SC56", ShrubberyCreationForm::makeNew);
    addEntry("SCF", ShrubberyCreationForm::makeNew);
    addEntry("scf", ShrubberyCreationForm::makeNew);
    
    addEntry("RobotomyRequestForm", RobotomyRequestForm::makeNew);
    addEntry("robotomy request form", RobotomyRequestForm::makeNew);
    addEntry("robotomy request", RobotomyRequestForm::makeNew);
    addEntry("RR64", RobotomyRequestForm::makeNew);
    addEntry("RRF", RobotomyRequestForm::makeNew);
    addEntry("rrf", RobotomyRequestForm::makeNew);

}

void    Intern::addEntry(std::string const &ident, Form *(*maker)(std::string const &))
{
    TableEntry *p;
    if (table == 0)
        table = new TableEntry(ident, maker);
    else
    {
        p = new TableEntry(ident, maker);
        p->setNext(table);
        table = p;
    }
}

Intern::~Intern()
{
    TableEntry *p1 = table;
    TableEntry *p2 = table;
    while (p1)
    {
        p2 = p1;
        p1 = p1->getNext();
        delete p2;
    }
}

Intern::Intern(const Intern &ref)
{
    table = ref.table;
}

Intern &Intern::operator=(const Intern &ref)
{
    (void)ref;
    return (*this);
}

Form *Intern::makeForm(std::string const &type, std::string const &target)
{
    Form *res = 0;
    TableEntry *p;
    p = table;
    while (p)
    {
        if (p->getIdent() == type)
        {
            res = p->makeForm(target);
            std::cout << "Intern creates form " << *res << "\n";
            return (res);
        }
        p = p->getNext();
    }
    std::cout << "Requested form not found\n";
    throw FormNotFoundException("Requested form not found");
    return (res);
}
