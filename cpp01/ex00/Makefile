CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD

CC = clang++

NAME = zomzom

SRC = main.cpp	\
	  Zombie.cpp\
	  newZombie.cpp	\
	  randomChump.cpp

OBJ = $(SRC:.cpp=.o)

DEP = $(OBJ:%.o=%.d)

-include $(DEP)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f $(DEP)

fclean: clean
	rm -f $(NAME)

re: clean fclean all

.PHONY: clean fclean all re
