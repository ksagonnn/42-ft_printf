NAME	= libftprintf.a

SRCS	= *.c

OBJS	= $(SRCS:.c=.o)
INCS	= ft_printf.h
CC	= gcc -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):	$(OBJS)

$(OBJS): $(SRCS): $(INCS)
	gcc -Wextra -Wall -Werror -c $(SRCS)
	ar rcs $(NAME) $(OBJS)

re:	fclean $(NAME)

clean:
	rm -f $(OBJS)
fclean:	clean
	rm -f $(NAME)
