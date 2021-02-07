#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *p = &str;
    std::string &r = str;

    std::cout << "str:       " << str << "\n";
    std::cout << "pointer:   " << *p << "\n";
    std::cout << "reference: " << r << "\n";
}