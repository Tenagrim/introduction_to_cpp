NAME=ex00
SRC=main.cpp Sorcerer.cpp Victim.cpp Peon.cpp Orc.cpp
HPP=Sorcerer.hpp Victim.hpp Peon.hpp Orc.hpp
CC= clang++
FLAGS= -Wall -Wextra  -Werror

all: $(NAME)

$(NAME): $(SRC) $(HPP)
	$(CC) $(FLAGS) -o $(NAME) $(SRC);

fclean:
	rm -rf $(NAME);

re: fclean all

