NAME=MoarBrainz
SRC=main.cpp  Zombie.cpp  ZombieHorde.cpp 
HPP=ZombieHorde.hpp	Zombie.hpp
CC= clang++
FLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(HPP)
	$(CC) $(FLAGS) -o $(NAME) $(SRC);

fclean:
	rm -rf $(NAME);

re: fclean all

