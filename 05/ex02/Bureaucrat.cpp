#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat::Bureaucrat(const Bureaucrat &ref) : name(ref.name), grade(ref.grade)
{
	validateGrade();
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name), grade(grade)
{
	validateGrade();
}

std::string	const &Bureaucrat::getName() const
{
	return (name);
}

int	Bureaucrat::getGrade() const
{
	return (grade);
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &ref)
{
	this->grade = ref.grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &ref)
{
	os << ref.getName() << ", bureaucrat grade " << ref.getGrade();
	return (os);
}

void	Bureaucrat::validateGrade()
{
	if (grade < 1)
		throw GradeTooHighException("Start grade is too high");
	if (grade > 150)
		throw GradeTooLowException("Start grade is too low");
}

void	Bureaucrat::increment()
{
	if (grade == 1)
		throw GradeTooHighException("Incremented grade is too high");
	grade--;
}

void	Bureaucrat::decrement()
{
	if (grade == 150)
		throw GradeTooLowException("Decremented grade is too low");
	grade++;
}
void	Bureaucrat::executeForm(Form const &form)
{
	if (!form.isSigned())
	{
		std::cout << *this << " cannot execute " << form << " because this form is nos signed\n";
	}
	else if (form.getGradeToExecute() < this->grade)
	{
		std::cout << *this << " cannot execute " << form << " because it's grade is too low\n";
	}
	else
		std::cout << *this << " executes " << form << "\n";
	form.execute(*this);
}
