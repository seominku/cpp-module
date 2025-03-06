NAME = Zombie
CFLAGS = -Wextra -Wall -Werror -std=c++98
CC		= clang++

SRCS =	main.cpp\
		Zombie.cpp\
		zombieHord.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re

