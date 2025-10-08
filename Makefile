NAME = libft.a

SRC =	ft_isalpha	ft_isdigit	ft_isalnum	ft_isascii	ft_isprint \
		ft_strlen	ft_memset	ft_bzero	ft_memcpy	ft_memmove \
		ft_strlcpy	ft_strlcat	ft_toupper	ft_tolower	ft_strchr \
		ft_strrchr	ft_strncmp	ft_memchr	ft_memcmp	ft_strnstr \
		ft_atoi		ft_calloc	ft_strdup	ft_substr	ft_strjoin \
		ft_strtrim	ft_split	ft_itoa		ft_strmapi	ft_striteri \
		ft_putchar_fd	ft_putchar_fd	ft_putendl_fd	ft_putnbr_fd

BONUS =	ft_lstnew		ft_lstadd_front	ft_lstsize	ft_lstlast \
		ft_lstadd_back	ft_lstdelone	ft_lstclear

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
