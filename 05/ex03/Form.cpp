/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:39:08 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:39:11 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"

Form::Form() :_name("Empty form"),
_grade_to_sign(150), _grade_to_execute(150),
_signed(false)
{}

Form::Form(std::string const &name, int sign, int exec) : _name(name),
_grade_to_sign(sign), _grade_to_execute(exec), _signed(false)
{}

Form::~Form()
{}

Form::Form(const Form &ref) : _name(ref._name),
_grade_to_sign(ref._grade_to_sign), _grade_to_execute(ref._grade_to_execute),
_signed(ref._signed)
{}

Form	&Form::operator=(const Form &ref)
{
	_signed = ref._signed;
	return (*this);
}

std::string const	&Form::getName() const
{
	return (_name);
}

bool				Form::isSigned() const
{
	return (_signed);
}

int					Form::getGradeToSign() const
{
	return (_grade_to_sign);
}

int					Form::getGradeToExecute() const
{
	return (_grade_to_execute);
}

std::ostream	&operator<<(std::ostream &os, const Form &ref)
{
	os << ((ref.isSigned()) ? "signed" : "not signed") << " form " << ref.getName() << " with "
	<< ref.getGradeToSign() << " grade to sign and " << ref.getGradeToExecute() << " grade to execute";
	return (os);
}

void				Form::beSigned(Bureaucrat const &signer)
{
	std::stringstream ss;

	if (signer.getGrade() > _grade_to_sign)
	{
		ss << signer << " cannot sign " << *this << " because his grade is too low";
		throw(Form::GradeTooLowException(ss.str()));
	}
	else if (_signed)
	{
		ss << signer << " cannot sign " << *this << " because this form is already signed";
		throw(Form::AlreadySignedException(ss.str()));
	}
	std::cout << signer << " signs " << *this << "\n";
	this->_signed = true;
}

void		Form::execute(Bureaucrat const &executor) const
{
    std::stringstream ss;
   if (_grade_to_execute < executor.getGrade())
   {
		ss << executor << " cannot execute " << *this << " because his grade is too low";
		throw(Form::GradeTooLowException(ss.str()));
   }
   else if (!_signed)
   {
		ss << executor << " cannot execute " << *this << " because this form is not signed\n";
		throw(Form::GradeTooLowException(ss.str()));
   }
}
