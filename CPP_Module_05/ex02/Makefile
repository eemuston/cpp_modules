NAME= bureaucrat

SRCS= main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp

OBJS= main.o Bureaucrat.o Form.o PresidentialPardonForm.o ShrubberyCreationForm.o RobotomyRequestForm.o

CC=c++

CFLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all