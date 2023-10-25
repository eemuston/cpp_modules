NAME= attack

SRCS= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS= main.o HumanA.o HumanB.o Weapon.o

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
