NAME = ./insaneChristophe
CPP = /bin/c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = contact.cpp main.cpp phoneBook.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re