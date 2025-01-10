FILES = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strnstr.c \
	ft_strncmp.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_strdup.c \
	ft_tolower.c \
	ft_toupper.c \

FILES_B = ft_lstnew.c \
		  ft_lstadd_front.c \
		  ft_lstsize.c \
		  ft_lstlast.c \
		  ft_lstiter.c \
		  ft_lstdelone.c \
		  ft_lstclear.c \
		  ft_lstmap.c \
		  ft_lstadd_back.c \

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJFILES = $(FILES:.c=.o)
OBJFILES_B = $(FILES_B:.c=.o)
AR = ar rcs
RM = rm -f

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJFILES)
	$(AR) $(NAME) $(OBJFILES)

bonus: $(NAME) $(OBJFILES_B)
	$(AR) $(NAME) $(OBJFILES_B)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME) $(OBJFILES)

re: fclean all

.PHONY: all clean fclean re bonus