NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FUNC = ft_printf\
	   ft_printf_utils\
	   ft_printf_sub

SRCS = $(addsuffix .c, $(FUNC))
OBJS = $(addsuffix .o, $(FUNC))

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : $(OBJS)
	$(AR) $@ $^

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re
