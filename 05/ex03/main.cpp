#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

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
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	testcase(new Bureaucrat("Hermes Conrad", 45), rrf);


	std::cout << "=================\n";
	testcase(new Bureaucrat("Max Fry", 15), someRandomIntern.makeForm("scf", "1-st_floor"));
	std::cout << "=================\n";
	testcase(new Bureaucrat("Laura", 37), someRandomIntern.makeForm("ppf", "Nemesis"));
	std::cout << "=================\n";
	testcase(new Bureaucrat("Zeus", 4), someRandomIntern.makeForm("ppf", "Nemesis"));
}