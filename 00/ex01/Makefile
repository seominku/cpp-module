NAME = Phonebook

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =	Phonebook.cpp\
		Contact.cpp\
		main.cpp

OBJS =	$(SRCS:.cpp=.o)

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