NAME := libft.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror
AR := ar
ARFLAGS := -rc

SRCS := first.c \
	second.c \
	third.c

OBJS := $(SRCS:.c=.o)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $?

%.o : %.c
	$(CC) $(CFLAGS) -c $<


.PHONY : all clean fclean re
