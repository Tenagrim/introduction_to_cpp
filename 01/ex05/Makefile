NAME=ex05
SRC=main.cpp  Brain.cpp Human.cpp
HPP=Brain.hpp Human.hpp
CC= clang++
FLAGS= -Wall -Wextra  #FIXME Weror

all: $(NAME)

$(NAME): $(SRC) $(HPP)
	$(CC) $(FLAGS) -o $(NAME) $(SRC);

fclean:
	rm -rf $(NAME);

re: fclean all

