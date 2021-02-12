NAME=ex01
SRC=main.cpp AWeapon.cpp PlasmaRifle.cpp PowerFist.cpp Enemy.cpp SuperMutant.cpp RadScorpion.cpp Character.cpp DeathClaw.cpp Minigun.cpp
HPP=AWeapon.hpp PlasmaRifle.hpp PowerFist.hpp Enemy.hpp SuperMutant.hpp RadScorpion.hpp Character.hpp DeathClaw.hpp Minigun.hpp
CC= clang++
OBJ=$(SRC:.cpp=.o)
FLAGS= -Wall -Wextra  -g #FIXME Weror

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

