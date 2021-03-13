NAME=ex02
SRC=main.cpp Base.cpp
HPP=Base.hpp A.hpp B.hpp C.hpp
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

