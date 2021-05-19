#include "Bureaucrat.hpp"
#include "Form.hpp"

void testcase(Bureaucrat *hermes, Form *form)
{
	try
	{
		form->beSigned(*hermes);
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
	std::cout << "=========\n";
	testcase(new Bureaucrat("Hermes Conrad", 43), new Form("025-U", 47, 50));
	std::cout << "=========\n";
	testcase(new Bureaucrat("Angela Moss", 73), new Form("025-U", 47, 50));
	std::cout << "=========\n";
}
