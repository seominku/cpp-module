NAME	=	Harl
CC		= clang++
CFLAGS	= -Wextra -Werror -Wall -std=c++98

SRCS	=	main.cpp\
			Harl.cpp

OBJS	=	$(SRCS:.cpp=.o)

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

.PHONY : clean fclean all re