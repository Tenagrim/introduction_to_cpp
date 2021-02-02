#ifndef PHONE_ENTRY
#define PHONE_ENTRY
#include <iostream>
#include <iomanip>
class PhoneEntry
{
    public:
        void	Show(int ind);
        void	ShowMore(void);
        void	SetFields(void);
        PhoneEntry(void);
        ~PhoneEntry(void);
    private:
        void		ShowField(std::string field);
        std::string	firstname;
        std::string	lastname;
        std::string	nickname;
        std::string	login;
        std::string	address;
        std::string	email;
        std::string	phone;
        std::string	birthday;
        std::string	meal;
        std::string	underwear_color;
        std::string	darkest_secret;
};
#endif