/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:39:54 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:39:57 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
class Form;
class Intern
{
private:
    class TableEntry
    {
    private:
        TableEntry();
        std::string identifier;
        Form *(*maker)(std::string const &);
        TableEntry *next;
    public:
        TableEntry(std::string const &ident, Form *(*maker)(std::string const &));
        ~TableEntry();
        TableEntry(const TableEntry &ref);
        TableEntry &operator=(const TableEntry &ref); 
        void        setNext(TableEntry *new_next);
        TableEntry  *getNext() const;
        Form        *makeForm(std::string const &target);
        std::string const &getIdent() const;
    };
	class FormNotFoundException: public std::runtime_error
	{
		public:
		FormNotFoundException(std::string const &msg) : std::runtime_error(msg){}
	};
    TableEntry  *table;
    void addEntry(std::string const &ident, Form *(*maker)(std::string const &));
public:
    Intern();
    ~Intern();
    Intern(const Intern &ref);
    Intern &operator=(const Intern &ref);
    Form    *makeForm(std::string const &type, std::string const &target);
};

