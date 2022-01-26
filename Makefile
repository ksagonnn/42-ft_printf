# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 15:25:47 by ksagon            #+#    #+#              #
#    Updated: 2022/01/26 15:44:36 by ksagon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT		=		./libft
LIBNAME		=		libft.a
NAME		=		libftprintf.a
CFLAGS		=		-Wall -Werror -Wextra -c
CC					=		gcc
RM					=		rm -f
AR					=		ar -rcs
FILES		=		ft_printf.c \
					ft_printf_char.c \
					ft_printf_dun.c \
					ft_printf_hex.c \
					ft_printf_int.c \
					ft_printf_ptr.c \
					ft_printf_str.c \

all: $(NAME)

$(NAME):
		@$(MAKE) -C $(LIBFT)
		@cp $(LIBFT)/$(LIBNAME) $(NAME)
		@$(CC) $(CFLAGS) $(FILES)
		@$(AR) $(NAME) $(OBJ)
		@echo "libft/ft_printf *.o files, $(NAME) & $(LIBNAME)"

clean:
		%(RM) $(OBJS)
		
fclean: clean
        $(RM) $(NAME)

re:     fclean all

.PHONY: all clean fclean re
