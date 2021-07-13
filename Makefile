NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
HEADER = ft_printf/
OPTION = -c
SRCS =	ft_memset.c\
		ft_strlen.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_strncmp.c\
		ft_atoi.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_printf/ft_printf.c\
		ft_printf/ft_putchar.c\
		ft_printf/ft_putnbr.c\
		ft_printf/ft_puthex.c\
		ft_printf/ft_putstr.c\
		ft_printf/ft_print_char.c\
		ft_printf/ft_print_dec.c\
		ft_printf/ft_print_format.c\
		ft_printf/ft_print_hex.c

BONUS = ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c

OBJS_SRCS = ${SRCS:.c=.o}

OBJS_BONUS = ${BONUS:.c=.o}

all: $(NAME)

$(NAME) : $(OBJS_SRCS)
		$(CC) $(FLAGS) $(OPTION) -I $(HEADER) $(SRCS)
		ar rc $(NAME) $(OBJS_SRCS)
		ranlib $(NAME)

bonus: $(OBJS_BONUS) $(OBJS_SRCS)
		$(CC) $(FLAGS) $(OPTION) $(BONUS)
		ar rc $(NAME) $(OBJS_BONUS)
		ranlib $(NAME)
clean:
		rm -f $(OBJS_SRCS) $(OBJS_BONUS) *.o
fclean: clean
		rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re bonus
