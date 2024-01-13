SRCS =	check_rule.c ft_print_char.c ft_print_decimal.c \
		ft_print_hex.c ft_print_ptr.c ft_print_str.c \
		ft_print_u_demical.c ft_printf.c is_rule.c
OBJS = $(SRCS:.c=.o)
CC = cc
HEADER = ft_printf.h
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM = rm -f
LIBC = ar rcs

$(NAME): $(OBJS)
	@$(LIBC) $(NAME) $(OBJS)

all: $(NAME)

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean: 
	@$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY: clean