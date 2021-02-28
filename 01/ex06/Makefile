NAME=ex06
SRC=main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HPP=Weapon.hpp HumanA.hpp HumanB.hpp
CC= clang++
FLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(HPP)
	$(CC) $(FLAGS) -o $(NAME) $(SRC);

fclean:
	rm -rf $(NAME);

re: fclean all

