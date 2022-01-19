CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD

CC = clang++

NAME = PhoneBook

SRC = contact.cpp	\
	  repertoire.cpp	\
	  main.cpp

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
