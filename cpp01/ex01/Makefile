CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD

CC = c++

NAME = horde 

SRC = main.cpp	\
	  Zombie.cpp\
	  ZombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

DEP = $(OBJ:%.o=%.d)

-include $(DEP)

all: $(NAME)

.cpp.o:
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f $(DEP)

fclean: clean
	rm -f $(NAME)

re: clean fclean all

.PHONY: clean fclean all re .cpp.o
