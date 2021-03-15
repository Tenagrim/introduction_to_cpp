/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:39:49 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:39:50 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>
#include <string>
class Bureaucrat;
#include "Form.hpp"
class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
	void				validateGrade();
	Bureaucrat();
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
public:
	~Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &ref);
	Bureaucrat &operator=(const Bureaucrat &ref);
	std::string	const &getName() const;
	int			getGrade() const;
	void		increment();
	void		decrement();
	void		executeForm(Form const &form);
};

std::ostream		&operator<<(std::ostream &os, const Bureaucrat &ref);
