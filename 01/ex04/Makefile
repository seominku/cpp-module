NAME	=	replace
CC		=	clang++
CFLAGS	=	-Wextra -Wall -Werror -std=c++98

SRC		=	main.cpp
OBJ	= $(SRC:.cpp=.o)

all	: $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean all re