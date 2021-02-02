#ifndef PHONE_BOOK
#define PHONE_BOOK
#include "PhoneEntry.hpp"

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