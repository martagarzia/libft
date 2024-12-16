#make fclean
#make

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlen.c \
      ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
      ft_memchr.c ft_memcmp.c ft_strnstr.c ft_strdup.c ft_calloc.c \
      ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      ft_toupper.c ft_tolower.c ft_atoi.c

OBJ = $(SRC:.c=.o)

all:
	@echo "OBJ: $(OBJ)"
	@echo "NAME: $(NAME)"
	$(CC) $(CFLAGS) -c $(SRC)
	$(AR) $(NAME) *.o

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean
