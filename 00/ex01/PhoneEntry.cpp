#include "PhoneEntry.hpp"
#include <iostream>

void    PhoneEntry::Show(int ind)
{
    std::cout << std::setiosflags(std::ios::left);
	ShowField(std::to_string(ind));
	std::cout << '|';
	ShowField(firstname);
	std::cout << '|';
	ShowField(lastname);
	std::cout << '|';
	ShowField(nickname);
	std::cout << '\n';
}

void    PhoneEntry::ShowMore(void)
{
    std::cout << std::endl;
    std::cout << "First name:       ";
	std::cout << firstname << std::endl;
    std::cout << "Last name:        ";
	std::cout << lastname << std::endl;
    std::cout << "Nickname:         ";
	std::cout << nickname << std::endl;
    std::cout << "Login:            ";
	std::cout << login << std::endl;
    std::cout << "Postal address:   ";
	std::cout << address << std::endl;
    std::cout << "Phone number:     ";
	std::cout << phone << std::endl;
    std::cout << "Birthday date:    ";
	std::cout << birthday << std::endl;
    std::cout << "Favorite meal:    ";
	std::cout << meal << std::endl;
    std::cout << "Underwear color:  ";
	std::cout << underwear_color << std::endl;
    std::cout << "Darkest secret:   ";
	std::cout << darkest_secret << std::endl;
}

void    PhoneEntry::ShowField(std::string field)
{
    if (field.length() <= 10)
		std::cout << std::setw(10) << field;
	else
		std::cout << field.substr(0, 9) + ".";
}

void    PhoneEntry::SetFields(void)
{
    std::cout << "Enter contact's first name:      ";
	getline(std::cin, firstname);
    std::cout << "Enter contact's last name:       ";
	getline(std::cin, lastname);
    std::cout << "Enter contact's nickname:        ";
	getline(std::cin, nickname);
    std::cout << "Enter contact's login:           ";
	getline(std::cin, login);
    std::cout << "Enter contact's postal address:  ";
	getline(std::cin, address);
    std::cout << "Enter contact's phone number:    ";
	getline(std::cin, phone);
    std::cout << "Enter contact's birthday date:   ";
	getline(std::cin, birthday);
    std::cout << "Enter contact's favorite meal:   ";
	getline(std::cin, meal);	
    std::cout << "Enter contact's underwear color: ";
	getline(std::cin, underwear_color);
    std::cout << "Enter contact's darkest secret:  ";
	getline(std::cin, darkest_secret);
}

std::string	PhoneEntry::GetBirthday()		{return birthday;}
std::string	PhoneEntry::GetDarkestSecret()	{return darkest_secret;}
std::string	PhoneEntry::GetEmail()			{return email;}
std::string	PhoneEntry::GetFirstName()		{return firstname;}
std::string	PhoneEntry::GetLastName()		{return lastname;}
std::string	PhoneEntry::GetLogin()			{return login;}
std::string	PhoneEntry::GetMeal()			{return meal;}
std::string	PhoneEntry::GetNickName()		{return nickname;}
std::string	PhoneEntry::GetPhone()			{return phone;}
std::string	PhoneEntry::GetUnderwearColor()	{return underwear_color;}
std::string	PhoneEntry::GetAddress()		{return address;}

void		PhoneEntry::SetDarkestSecret(std::string str)	{darkest_secret = str;}
void		PhoneEntry::SetBirthday(std::string str)		{birthday = str;}
void		PhoneEntry::SetEmail(std::string str)			{email = str;}
void		PhoneEntry::SetFirstName(std::string str)		{firstname = str;}
void		PhoneEntry::SetLastName(std::string str)		{lastname = str;}
void		PhoneEntry::SetLogin(std::string str)			{login = str;}
void		PhoneEntry::SetMeal(std::string str)			{meal = str;}
void		PhoneEntry::SetNickName(std::string str)		{nickname = str;}
void		PhoneEntry::SetPhone(std::string str)			{phone = str;}
void		PhoneEntry::SetUnderwearColor(std::string str)	{underwear_color = str;}

PhoneEntry::PhoneEntry(void)
{}

PhoneEntry::~PhoneEntry(void)
{}
