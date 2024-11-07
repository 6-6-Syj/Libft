NAME = libft.a

SRCS = ft_isalnum.c	\
	tester.c		\


OBJS = ft_isalnum.o	\
	tester.o		\

CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -f 
HEADER = libft.h
AR = ar
ARFLAGS = -r -c -s

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
