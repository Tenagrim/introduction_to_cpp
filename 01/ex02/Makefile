NAME=ZomieEvent
SRC=main.cpp  Zombie.cpp  ZombieEvent.cpp 
HPP=ZombieEvent.hpp	Zombie.hpp
CC= clang++
FLAGS= -Wall -Wextra #FIXME Weror

all: $(NAME)

$(NAME): $(SRC) $(HPP)
	$(CC) $(FLAGS) -o $(NAME) $(SRC);

fclean:
	rm -rf $(NAME);

re: fclean all

