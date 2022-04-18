NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar
ARFLAGS = -rcs


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
			ft_lstmap \
			ft_lstadd_back \
			ft_lstdelone \
			ft_lstclear \
			ft_lstiter
			
SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(BONUS_FILES)))
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(SRCS_B:.c=.o)

ifdef BONUS_FLAG
	OBJS_FILES = $(OBJS) $(BONUS_OBJS)
else
	OBJS_FILES = $(OBJS)
endif

all: $(NAME)

$(NAME) : $(OBJS_FILES)
	$(AR) $(ARFLAGS) $@ $^


%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus:
	@make BONUS_FLAG=1 all

.PHONY: bonus all clean fclean re
