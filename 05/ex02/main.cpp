/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:39:00 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:39:03 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

void testcase(Bureaucrat *hermes, Form *form)
{
	Bureaucrat abs("Absoluse Signer", 1);
	form->beSigned(abs);
	try
	{
		hermes->executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete(hermes);
	delete(form);
}

void testcase_unsigned(Bureaucrat *hermes, Form *form)
{
	try
	{
		hermes->executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete(hermes);
	delete(form);
}

int main()
{
	srand(time(0));
	std::cout << "=========\n";
	testcase(new Bureaucrat("Hermes Conrad", 43), new ShrubberyCreationForm("home"));
	std::cout << "=========\n";
	testcase(new Bureaucrat("Angela Moss", 4), new PresidentialPardonForm("Jeffry Lebovski"));
	std::cout << "=========\n";
	testcase(new Bureaucrat("Bjern Mc'Cloud", 44), new RobotomyRequestForm("Homer Simpson"));
	std::cout << "=========\n";
	
	std::cout << "+++++++++++++++++++++++++++++\n";
	
	testcase(new Bureaucrat("Angela Moss", 100), new PresidentialPardonForm("Jeffry Lebovski"));
	std::cout << "=========\n";
	testcase(new Bureaucrat("Bjern Mc'Cloud", 73), new RobotomyRequestForm("Homer Simpson"));
	std::cout << "=========\n";
	testcase(new Bureaucrat("Hermes Conrad", 146), new ShrubberyCreationForm("home"));
	std::cout << "=========\n";
	
	std::cout << "+++++++++++++++++++++++++++++\n";

	testcase_unsigned(new Bureaucrat("Hermes Conrad", 43), new ShrubberyCreationForm("home"));
	std::cout << "=========\n";
	testcase_unsigned(new Bureaucrat("Angela Moss", 4), new PresidentialPardonForm("Jeffry Lebovski"));
	std::cout << "=========\n";
	testcase_unsigned(new Bureaucrat("Bjern Mc'Cloud", 44), new RobotomyRequestForm("Homer Simpson"));
	std::cout << "=========\n";
}
