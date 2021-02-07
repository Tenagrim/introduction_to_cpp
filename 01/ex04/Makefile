NAME=ex04
SRC=ex04.cpp  
CC= clang++
FLAGS= -Wall -Wextra  #FIXME Weror

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) -o $(NAME) $(SRC);

fclean:
	rm -rf $(NAME);

re: fclean all

