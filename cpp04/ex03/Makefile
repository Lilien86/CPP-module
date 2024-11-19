NAME = ./ex03
CXX = /bin/c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp ./Materia/AMateria.cpp ./Materia/Materia.cpp ./Materia/Ice.cpp ./Materia/Cure.cpp ICharacter.cpp Character.cpp ./Materia/IMateriaSource.cpp ./Materia/MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re