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
	int	i;

    if (field.length() <= 10)
		std::cout << std::setw(10) << field;
	else
	{
		i = 0;
		while (i < 9)
			std::cout << field[i++];
		std::cout << '.';
	}

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

PhoneEntry::PhoneEntry(void)
{}
PhoneEntry::~PhoneEntry(void)
{}