NAME=ex03
SRC=main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp \
MateriaSource.cpp MateriaList.cpp MateriaPod.cpp Fire.cpp
HPP=AMateria.hpp Ice.hpp Cure.hpp Character.hpp MateriaSource.hpp \
ICharacter.hpp IMateriaSource.hpp MateriaList.hpp MateriaPod.hpp \
Fire.hpp
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

