#include "Bureaucrat.hpp"
#include "Form.hpp"

void testcase(Bureaucrat *hermes, Form *form)
{
	form->beSigned(*hermes);
	delete(hermes);
	delete(form);
}

int main()
{
	testcase(new Bureaucrat("Hermes Conrad", 43), new Form("025-U", 47, 50));
	testcase(new Bureaucrat("Angela Moss", 73), new Form("025-U", 47, 50));
}