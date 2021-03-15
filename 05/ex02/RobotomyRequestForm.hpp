/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:39:44 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:39:46 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
class RobotomyRequestForm : public Form
{
private:
    std::string target;
    RobotomyRequestForm();

public:
    RobotomyRequestForm(const std::string &target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &ref);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &ref);
    void execute(Bureaucrat const &executor) const;
};
