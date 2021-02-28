#pragma once
#include <stdexcept>
#include <string>
#include <iostream>
#include <sstream>
class Form;
#include "Bureaucrat.hpp"
class Form
{
private:
	std::string	const	_name;
	int const			_grade_to_sign;
	int const			_grade_to_execute;
	bool				_signed;
	class GradeTooHighException : public std::runtime_error
	{
		public:
		GradeTooHighException(std::string const &msg) : std::runtime_error(msg){}
	};
	class GradeTooLowException : public std::runtime_error
	{
		public:
		GradeTooLowException(std::string const &msg) : std::runtime_error(msg){}
	};
	class AlreadySignedException : public std::runtime_error
	{
		public:
		AlreadySignedException(std::string const &msg) : std::runtime_error(msg){}
	};
	Form();
public:
	virtual ~Form();
	Form(std::string const &name, int sign, int exec);
	Form(const Form &ref);
	Form				&operator=(const Form &ref); 
	int					getGradeToSign()const;
	int					getGradeToExecute() const;
	std::string const	&getName() const;
	bool				isSigned() const;
	void				beSigned(Bureaucrat const &signer);
	virtual void		execute(Bureaucrat const & executor) const ;


};
std::ostream			&operator<<(std::ostream &os, const Form &ref);
