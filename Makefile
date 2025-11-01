#------------------------------------------------#
#					LIBFT						 #
#------------------------------------------------#
NAME		= libft.a
HEADER		= include/libft.h
MAKEFILE	= Makefile

#------------------------------------------------#
#					FILES						 #
#------------------------------------------------#
SRC_FILES = 	free_strs				\
				ft_atof					\
				ft_atoi					\
				ft_atoll				\
				ft_bzero				\
				ft_calloc				\
				ft_delete_node			\
				ft_isalnum				\
				ft_isalpha				\
				ft_isascii				\
				ft_isdigit				\
				ft_isprint				\
				ft_itoa					\
				ft_lst_size				\
				ft_lstadd_back			\
				ft_lstadd_front			\
				ft_lstclear				\
				ft_memchr				\
				ft_memcmp				\
				ft_memcpy				\
				ft_memmove				\
				ft_memset				\
				ft_newlst				\
				ft_printf_extend		\
				ft_printf_float			\
				ft_printf_utils			\
				ft_printf				\
				ft_putchar_fd			\
				ft_putendl_fd			\
				ft_putnbr_fd			\
				ft_putstr_fd			\
				ft_split				\
				ft_strchr				\
				ft_strcmp				\
				ft_strdup				\
				ft_striteri				\
				ft_strjoin				\
				ft_strlcat				\
				ft_strlcpy				\
				ft_strlen				\
				ft_strmapi				\
				ft_strncmp				\
				ft_strndup				\
				ft_strnstr				\
				ft_strrchr				\
				ft_strtrim				\
				ft_substr				\
				ft_tolower				\
				ft_toupper				\
				gnl_utils				\
				gnl
				
#------------------------------------------------#
#					DIRECTORY					 #
#------------------------------------------------#
OBJ_DIR		= .build/
SRC_DIR		= src/

#------------------------------------------------#
#					PATHS						 #
#------------------------------------------------#
SRC = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

DEP = $(OBJ:.o=.d)
-include $(DEP)

#------------------------------------------------#
#					FLAGS						 #
#------------------------------------------------#
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g3
CPPFLAGS 	= -MMD -MP -Iinclude
MAKEFLAGS	+= --no-print-directory

AR			= ar
ARFLAGS		= -r -c -s

#------------------------------------------------#
#			FUNCTION TO CREATE DIRS 			 #
#------------------------------------------------#
define create_dir
	$(shell mkdir -p $(dir $(1)))
endef

#------------------------------------------------#
#					RULES						 #
#------------------------------------------------#
all: $(NAME)

$(NAME): $(OBJS) $(HEADER) Makefile
	@echo "\n$(MAGENTA)$(BOLD)📚 Creating library...$(RESET)"
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "$(GREEN)$(BOLD)\n✅ Library created !$(RESET)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c Makefile $(HEADER)
	$(call create_dir,$@)
	@echo " → Compiling $(YELLOW)$<$(RESET)"
	@$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(MAGENTA)$(BOLD)🧹 Cleaning up project files...$(RESET)"
	@echo "$(CYAN)    ├─ Removed object files, and dependencies$(RESET)"
	@echo "$(CYAN)    └─ Cleaned build directory: $(OBJ_DIR)\n$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(GREEN)$(BOLD)🗑️  Full clean-up completed:$(RESET)"
	@echo "$(CYAN)    └─ Static library removed: $(NAME)\n$(RESET)"

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re

#------------------------------------------------#
#					COLORS						 #
#------------------------------------------------#
GREEN			= \033[0;32m
YELLOW			= \033[1;33m
CYAN			= \033[0;36m
MAGENTA			= \033[0;35m
BOLD    		= \033[1m
RESET   		= \033[0m