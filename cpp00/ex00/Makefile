CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

DEP = $(OBJ:%.o=%.d)

-include $(DEP)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -MMD -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(DEP)

fclean: clean
	rm -f $(NAME)

re: clean fclean all

.PHONY: clean fclean all re
