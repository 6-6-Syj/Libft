NAME = libft.a

SRCS = ft_bzero.c	\
	ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isascii.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_memcpy.c		\
	ft_memmove.c	\
	ft_memset.c		\
	ft_strlcat.c	\
	ft_strlcpy.c	\
	ft_strlen.c		\
	ft_strchr.c		\
	ft_strrchr.c	\
	ft_toupper.c	\
	ft_tolower.c	\
	tester_syj.c	\


OBJS = $(SRCS:.c=.o)
# $(CC) $(OBJS) -o $(NAME)

CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -f
HEADER = libft.h
# CPPFLAGS = -I.
AR = ar
ARFLAGS = -r -c -s


all : $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
