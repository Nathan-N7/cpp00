NAME = polymorphism
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Dog.cpp Cat.cpp Animal.cpp main.cpp
LIB = Dog.hpp Cat.hpp Animal.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

.cpp.o $(LIB):
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re