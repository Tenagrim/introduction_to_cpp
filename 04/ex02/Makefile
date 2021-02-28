NAME=ex02
SRC=main.cpp Squad.cpp TacticalMarine.cpp AssaultTerminator.cpp MarineList.cpp MarinePod.cpp
HPP=Squad.hpp TacticalMarine.hpp AssaultTerminator.hpp MarineList.hpp MarinePod.hpp
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

