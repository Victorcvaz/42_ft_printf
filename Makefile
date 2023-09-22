NAME := libftprintf.a
CC := cc
CFLAGS := -Wall -Wextra -Werror
LIB = ar -rcs

LIBFT = libft/libft.a
MAKE_LIBFT = @make -C libft --no-print-directory

MANDATORY_DIR := ./mandatory/
MANDATORY_HEADER_PATH := $(MANDATORY_DIR)includes/
MANDATORY_SOURCE_PATH := $(MANDATORY_DIR)src/

MANDATORY := $(addprefix $(MANDATORY_SOURCE_PATH), ft_printf.c ft_putptr.c)

MANDATORY_OBJS := $(MANDATORY:.c=.o)

all: $(NAME)

$(MANDATORY_SRC_DIR)%.o: $(MANDATORY_SRC_DIR)%.c
	@$(CC) $(CFLAGS) -I $(MANDATORY_HEADER_PATH) -c $< -o $@
	@echo "Object file created"

$(NAME): $(LIBFT) $(MANDATORY_OBJS)
	@cp $(LIBFT) $(NAME)
	@$(LIB) $(NAME) $(MANDATORY_OBJS) $(LIBFT)
	@echo "$(NAME) created"

$(LIBFT):
	@$(MAKE_LIBFT)

clean:
	@rm -rf $(MANDATORY_OBJS)
	@echo "rm $(MANDATORY_OBJS)"
	@make clean -C libft --no-print-directory

fclean: clean
	@make fclean -C libft --no-print-directory
	@rm -rf $(NAME)
	@echo "rm $(NAME)"

re: fclean all

.PHONY: all clean fclean re

