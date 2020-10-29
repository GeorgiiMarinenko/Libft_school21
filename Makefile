NAME = libft
FIND = find . | grep ".\c" | tr '\n' ' '
SRCS = SRCS/main.c SRCS/ft_memset.c SRCS/ft_bzero.c SRCS/ft_memcpy.c SRCS/ft_memccpy.c SRCS/ft_memmove.c SRCS/ft_memchr.c SRCS/ft_memcmp.c SRCS/ft_strlen.c SRCS/ft_strlcpy.c SRCS/ft_strlcat.c SRCS/ft_strchr.c SRCS/ft_strrchr.c

CFLAGS = -Wall -Werror -Wextra

HEADER = INCLUDES/libft.h

OBJS = $(SRCS:.c=.o)

CC = gcc

run:
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) -I $(INCLUDES)

binrun:
	./$(NAME)

lounch: run binrun

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) -I $(HEADER)

all: $(NAME)
	$(NAME) $(SRCS)

clean:
	rm  -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re run bimrun
.SILENT: all $(NAME) $(OBJS) run binrun
