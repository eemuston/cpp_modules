NAME= zombie

SRCS= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJS= main.o newZombie.o randomChump.o Zombie.o

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
