NAME = ./ex00
CXX = /bin/c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98


SRCS = main.cpp ScalarConverter.cpp Convert.cpp

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