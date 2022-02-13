CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD

CC = c++

NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

DEP = $(OBJ:%.o=%.d)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

-include $(DEP)

clean:
	rm -f $(OBJ) $(DEP)

fclean: clean
	rm -f $(NAME)

re: clean fclean all

.PHONY: clean fclean all re
