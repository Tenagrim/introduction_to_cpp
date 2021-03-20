/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:39:41 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:39:43 by gshona           ###   ########.fr       */
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
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &ref);
    PresidentialPardonForm  &operator=(const PresidentialPardonForm &ref); 
	void		    execute(Bureaucrat const & executor) const;
};
