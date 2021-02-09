NAME=ex00
SRC=main.cpp  Fixed.cpp
HPP=Fixed.hpp
CC= clang++
FLAGS= -Wall -Wextra  #FIXME Weror

all: $(NAME)

$(NAME): $(SRC) $(HPP)
	$(CC) $(FLAGS) -o $(NAME) $(SRC);

fclean:
	rm -rf $(NAME);

re: fclean all

