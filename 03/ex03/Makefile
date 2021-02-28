NAME=ex03
SRC=main.cpp FragTrap.cpp ScavTrap.cpp ClapTrap.cpp NinjaTrap.cpp
HPP=FragTrap.hpp ScavTrap.hpp ClapTrap.hpp NinjaTrap.hpp
CC= clang++
FLAGS= -Wall -Wextra  -Werror

all: $(NAME)

$(NAME): $(SRC) $(HPP)
	$(CC) $(FLAGS) -o $(NAME) $(SRC);

fclean:
	rm -rf $(NAME);

re: fclean all

