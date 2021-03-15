/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:39:58 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:39:59 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include <string>
class PresidentialPardonForm : public Form
{
private:
    std::string target;
    PresidentialPardonForm();
public:
    ~PresidentialPardonForm();
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &ref);
    PresidentialPardonForm  &operator=(const PresidentialPardonForm &ref); 
	void		    execute(Bureaucrat const & executor) const;
	static Form			*makeNew(const std::string &target);
};
