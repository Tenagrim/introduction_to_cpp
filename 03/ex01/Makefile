NAME=ex01
SRC=main.cpp  FragTrap.cpp ScavTrap.cpp
HPP=FragTrap.hpp ScavTrap.hpp
CC= clang++
FLAGS= -Wall -Wextra  -Werror

all: $(NAME)

$(NAME): $(SRC) $(HPP)
	$(CC) $(FLAGS) -o $(NAME) $(SRC);

fclean:
	rm -rf $(NAME);

re: fclean all

