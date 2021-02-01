#include <iostream>

void    upcase(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            std::cout << (char)(*str - 32);
        else
            std::cout << *str;
        str++;
    }
}

void    upcased_out(char **av)
{
    while (*av)
    {
        upcase(*av);
        av++;
        if (*av)
        std::cout << " ";
    }
    std::cout << "\n";
}

int     main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (1);
    }
    else
        upcased_out(av + 1);
}