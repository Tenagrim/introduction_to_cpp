NAME=ex00
SRC=main.cpp
HPP=easyfind.hpp
CC= clang++
OBJ=$(SRC:.cpp=.o)
FLAGS= -Wall -Wextra  -Werror 

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) $(HPP)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ);

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME);

re: fclean all

