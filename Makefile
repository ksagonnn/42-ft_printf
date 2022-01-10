# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 15:25:47 by ksagon            #+#    #+#              #
#    Updated: 2021/12/01 17:42:07 by ksagon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libftprintf.a

CFLAGS  = -Wall -Wextra -Werror
RM      = rm -f
CC      = gcc
AR      = ar rcs

$(NAME): $(OBJS)
        $(AR) $(NAME) $(OBJS)

all:    $(NAME)
clean:
	%(RM) $(OBJS)

fclean: clean
        $(RM) $(NAME)

re:     fclean all

.PHONY: all clean fclean re
