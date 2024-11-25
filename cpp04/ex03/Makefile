NAME = ./ex03
CXX = /bin/c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp AMateria.cpp Materia.cpp Ice.cpp Cure.cpp ICharacter.cpp Character.cpp IMateriaSource.cpp MateriaSource.cpp

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