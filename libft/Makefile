NAME = libft.a

CC = cc
FLAGS = -Wall -Wextra -Werror

CHAR_SRCS = $(addprefix ./src/char/, ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_tolower.c ft_toupper.c)

MATH_SRCS = $(addprefix ./src/math/, ft_atoi.c ft_itoa.c ft_check_base_errors.c ft_calc_nbr_digits.c \
	ft_itoa_base.c ft_atoi_base.c)

MEMORY_SRCS = $(addprefix ./src/memory/, ft_memset.c ft_bzero.c ft_memchr.c ft_memcpy.c \
	ft_memmove.c ft_memcmp.c ft_calloc.c)

STDIO_SRCS = $(addprefix ./src/stdio/, ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_gnl.c ft_putnbr_base_fd.c)

STR_SRCS = $(addprefix ./src/str/, ft_strlcat.c ft_strlcpy.c ft_strnstr.c ft_strdup.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c \
	ft_strlen.c ft_striteri.c)

SRCS = $(CHAR_SRCS) $(MATH_SRCS) $(MEMORY_SRCS) $(STDIO_SRCS) $(STR_SRCS)


OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "Object file created"

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "$(NAME) created"

clean:
	@echo "rm objs"
	@rm -rf $(OBJS)

fclean: clean
	@echo "rm $(NAME)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
