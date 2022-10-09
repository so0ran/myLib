CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	libft.a
MAIN	=	myFunc/ft_atoi.c myFunc/ft_bzero.c myFunc/ft_calloc.c \
			myFunc/ft_isalnum.c myFunc/ft_isalpha.c	myFunc/ft_isascii.c \
			myFunc/ft_isdigit.c myFunc/ft_isprint.c	myFunc/ft_memchr.c \
			myFunc/ft_memcmp.c myFunc/ft_memcpy.c myFunc/ft_memmove.c \
			myFunc/ft_memset.c myFunc/ft_strchr.c myFunc/ft_strdup.c \
			myFunc/ft_strlcat.c myFunc/ft_strlcpy.c myFunc/ft_strlen.c \
			myFunc/ft_strncmp.c myFunc/ft_strnstr.c myFunc/ft_strrchr.c \
			myFunc/ft_tolower.c myFunc/ft_toupper.c

OBJEC	= $(MAIN:.c=.o)


.c.o	:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I.

all		: $(NAME)

$(NAME)	: $(OBJEC)
	ar rcs $(NAME) $(OBJEC)

clean:
	rm -rf $(OBJEC)

fclean: clean
	rm -rf $(NAME)

re: fclean all
