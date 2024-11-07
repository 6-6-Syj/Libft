NAME = libft.a

SRCS = ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isascii.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_memcpy.c		\
	tester.c		\


OBJS = ft_isalnum.o	\
	ft_isalpha.o	\
	ft_isascii.o	\
	ft_isdigit.o	\
	ft_isprint.o	\
	ft_memcpy.o		\
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
