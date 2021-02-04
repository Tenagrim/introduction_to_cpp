NAME=zoo
SRC=Pony.cpp main.cpp
HPP=Pony.hpp
CC= clang++
FLAGS= -Wall -Wextra #FIXME Weror

all: $(NAME)

$(NAME): $(SRC) $(HPP)
	$(CC) $(FLAGS) -o $(NAME) $(SRC);

fclean:
	rm -rf $(NAME);

re: fclean all

