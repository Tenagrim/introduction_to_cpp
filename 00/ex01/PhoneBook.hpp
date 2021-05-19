#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP
#include "PhoneEntry.hpp"
#include <sstream>

class PhoneBook
{
    private:
        PhoneEntry  content[8];
        int         size;
        int         cap;
    public:
        void        Show(void);
        void        AddEntry();
        void        MainCycle(void);
        PhoneBook(void);
        ~PhoneBook(void);
};
#endif
