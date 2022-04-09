NAME := libft.a
OBJS := first.o \
	second.o \
	third.o
AR := ar
ARFLAGS := -rc

CC := gcc
CFLAGS := -Wall -Wextra -Werror


$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $?

%.o : %.c
	$(CC) $(CFLAGS) -c $< 
