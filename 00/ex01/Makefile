NAME=phonebook
SRC=PhoneBook.cpp PhoneEntry.cpp main.cpp
HPP=PhoneBook.hpp PhoneEntry.hpp
CC= clang++
FLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(HPP)
	$(CC) $(FLAGS) -o $(NAME) $(SRC);

fclean:
	rm -rf $(NAME);

re: fclean all

