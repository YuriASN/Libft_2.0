NAME = libft.a

SRC =	ft_atoi.c		ft_bzero.c		ft_isalnum.c	ft_isalpha.c \
		ft_isascii.c	ft_isdigit.c	ft_isprint.c	ft_itoa.c \
		ft_memalloc.c	ft_memccpy.c	ft_memchr.c		ft_memcmp.c \
		ft_memcpy.c		ft_memdel.c		ft_memmove.c	ft_memset.c \
		ft_putchar.c	ft_putchar_fd.c	ft_putendl.c	ft_putendl_fd.c \
		ft_putnbr.c		ft_putnbr_fd.c	ft_putstr.c		ft_putstr_fd.c \
		ft_strcat.c		ft_strchr.c		ft_strclr.c		ft_strcmp.c \
		ft_strcpy.c		ft_strdel.c		ft_strdup.c		ft_strequ.c \
		ft_striter.c	ft_striteri.c 	ft_strjoin.c	ft_strlcat.c \
		ft_strlen.c		ft_strmap.c		ft_strmapi.c	ft_strncat.c \
		ft_strncmp.c	ft_strncpy.c	ft_strnequ.c	ft_strnew.c \
		ft_strnstr.c	ft_strrchr.c	ft_strsplit.c	ft_strstr.c \
		ft_strsub.c		ft_strtrim.c	ft_tolower.c	ft_toupper.c

BONUS = ft_lstadd.c		ft_lstdel.c		ft_lstdelone.c \
		ft_lstiter.c	ft_lstmap.c		ft_lstnew.c

OBJ = $(SRC:.c=.o)
BNOBJ = $(BONUS:.c=.o)

CC = cc
FLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -c $(SRC)
	@ar -rcs $(NAME) $(OBJ)
	@echo "\033[92mLibft compiled!\033[m"
bonus: $(OBJ) $(BNOBJ)
	@$(CC) $(FLAGS) -c $(SRC) $(BONUS)
	@ar rcs $(NAME)  $(OBJ) $(BNOBJ)
	@echo "\033[92mLibft with bonus compiled!\033[m"

clean:
	@rm -f $(OBJ) $(BNOBJ)
	@echo "\e[0;93mclean done.\033[m"

fclean: clean
	@rm -f $(NAME) libft.h.gch libft.so
	@echo "\e[0;93mfclean done.\033[m"

re: fclean all

rebonus: fclean bonus

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC) $(BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(BNOBJ)