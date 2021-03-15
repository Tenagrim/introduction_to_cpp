NAME=megaphone
SRC=megaphone.cpp
CC= clang++
FLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) -o $(NAME) $(SRC);

clean:
	rm -rf $(NAME);

fclean: clean
	rm -rf $(NAME);

re: fclean all