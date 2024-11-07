NAME = libft.a

SRCS = ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isascii.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_memcpy.c		\
	ft_memset.c		\
	ft_strlen.c		\
	tester.c		\


OBJS = $(SRCS:.c=.o)

CC = gcc
FLAGS = -Wall -Werror -Wextra
RM = rm -f
HEADER = libft.h
CPPFLAGS = -I.
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
