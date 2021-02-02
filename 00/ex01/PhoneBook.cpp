#include "PhoneEntry.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    cap = 8;
    size = 0;
}
PhoneBook::~PhoneBook(void)
{}

void    PhoneBook::AddEntry()
{
    if (size < cap)
    {
        content[size].SetFields();
        size++;
    }
    else
        std::cout << "No more space in book\n";
}
void PhoneBook::Show(void)
{
    int     	i;
	std::string	str;

    i = 0;
	if (size == 0)
	{
		std::cout << "PHONE BOOK IS EMPTY\n";
		return;
	}
    std::cout << "SAVED CONTACTS:\n";
    while (i < size)
    {
        content[i].Show(i);
        i++;
	}
    std::cout << "Enter index for detailed watch: ";
	getline(std::cin, str);
	try
	{
		i = std::stoi(str);
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << "Wrong index entered: "<< str << '\n';
		return;
	}
	if (i < 0 || i >= size)
		std::cout << "No such index in the book\n";
	else
		content[i].ShowMore();
}

void      PhoneBook::MainCycle(void)
{
    bool        quit;
    std::string command;

    quit = false;
    while (!quit)
    {
        std::cout << "> ";
		getline(std::cin, command);
		//std::cout << "Command: " << command << "\n";
        if (command == "EXIT")
            quit = true;
        else if (command == "ADD")
            AddEntry();
        else if (command == "SEARCH")
            Show();
        else
            std::cout << "Command: " << command << " is disclared.\nOnly this commands allowed: ADD, SEARCH, EXIT\n";
    }
}
