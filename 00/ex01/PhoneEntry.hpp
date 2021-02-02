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
		void	SetFirstName(std::string str);
		void	SetLastName(std::string str);
		void	SetNickName(std::string str);
		void	SetLogin(std::string str);
		void	SetAddress(std::string str);
		void	SetEmail(std::string str);
		void	SetPhone(std::string str);
		void	SetBirthday(std::string str);
		void	SetMeal(std::string str);
		void	SetUnderwearColor(std::string str);
		void	SetDarkestSecret(std::string str);
		std::string	GetFirstName(void);
		std::string	GetLastName(void);
		std::string	GetNickName(void);
		std::string	GetLogin(void);
		std::string	GetAddress(void);
		std::string	GetEmail(void);
		std::string	GetPhone(void);
		std::string	GetBirthday(void);
		std::string	GetMeal(void);
		std::string	GetUnderwearColor(void);
		std::string	GetDarkestSecret(void);
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