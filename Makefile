NAME := libftprintf.a
CC := cc
CFLAGS := -Wall -Wextra -Werror
LIB = ar -rcs

MANDATORY_DIR := ./mandatory/
MANDATORY_HEADER_PATH := $(MANDATORY_DIR)includes/
MANDATORY_SOURCE_PATH := $(MANDATORY_DIR)src/

MANDATORY := $(addprefix $(MANDATORY_SOURCE_PATH), ft_printf.c ft_putptr.c ft_calc_nbr_digits.c \
	ft_check_base_errors.c ft_itoa_base.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_base_fd.c ft_strlen.c \
	ft_putnbr_fd.c)

MANDATORY_OBJS := $(MANDATORY:.c=.o)

all: $(NAME)

$(MANDATORY_SRC_DIR)%.o: $(MANDATORY_SRC_DIR)%.c
	@$(CC) $(CFLAGS) -I $(MANDATORY_HEADER_PATH) -c $< -o $@
	@echo "Object file created"

$(NAME): $(MANDATORY_OBJS)
	@$(LIB) $(NAME) $(MANDATORY_OBJS)
	@echo "$(NAME) created"

clean:
	@rm -rf $(MANDATORY_OBJS)
	@echo "rm $(MANDATORY_OBJS)"

fclean: clean
	@rm -rf $(NAME)
	@echo "rm $(NAME)"

re: fclean all

.PHONY: all clean fclean re

