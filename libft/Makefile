CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs
NAME = libft.a
FILES = ft_bzero \
		ft_isalnum \
		ft_isalpha \
		ft_isascii \
		ft_isdigit \
		ft_isprint \
		ft_memcpy \
		ft_memmove \
		ft_memset \
		ft_strchr \
		ft_strlcat \
		ft_strlcpy \
		ft_strlen \
		ft_strncmp \
		ft_strrchr \
		ft_tolower \
		ft_toupper \
		ft_memchr \
		ft_memcmp \
		ft_strnstr \
		ft_atoi \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_split \
		ft_strtrim \
		ft_itoa \
		ft_strmapi \
		ft_striteri \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd
BONUS_FILES = ft_lstnew \
			ft_lstadd_front \
			ft_lstsize \
			ft_lstlast \
			ft_lstadd_back \
			ft_lstdelone \
			ft_lstclear \
			ft_lstiter \
			
SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(BONUS_FILES)))
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(SRCS_B:.c=.o)
.c.o:       $(SRCS)
			$(CC) $(CFLAGS) -c -o $@ $<
$(NAME):    $(OBJS)
			$(AR) $@ $^
bonus:      $(BONUS_OBJS)
			$(AR) $(NAME) $^
all:        $(NAME)
clean:
			$(RM) $(OBJS) $(BONUS_OBJS)
fclean: clean
			$(RM) $(NAME)
re: clean all
.PHONY: bonus all clean fclean re