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
    TableEntry  *table;
    void addEntry(std::string const &ident, Form *(*maker)(std::string const &));
public:
    Intern();
    ~Intern();
    Intern(const Intern &ref);
    Intern &operator=(const Intern &ref);
    Form    *makeForm(std::string const &type, std::string const &target);
};

