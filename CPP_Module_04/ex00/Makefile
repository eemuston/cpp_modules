NAME= animal

SRCS= main.cpp Animal.cpp Dog.cpp Cat.cpp

OBJS= main.o Animal.o Dog.o Cat.o

CC=c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all