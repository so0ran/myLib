CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
NAME 	=	libft.a
MAIN	= 	ft_memcmp.c ft_strchr.c \
			ft_strrchr.c ft_bzero.c ft_isdigit.c \
			ft_memcpy.c ft_strdup.c ft_tolower.c \
			ft_isalnum.c ft_isprint.c ft_memmove.c \
			ft_strlen.c ft_toupper.c ft_isalpha.c \
			ft_memchr.c ft_memset.c ft_strncmp.c \
			

MAIN1= $(MAIN:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $(MAIN) 
	
	#-o $(MAIN1)

all: $(NAME)

$(NAME): $(MAIN1)
	ar rcs $(NAME) $(MAIN1)
clean:
	rm -rf $(MAIN1)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re