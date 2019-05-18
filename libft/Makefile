# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/20 15:47:51 by kzouggar          #+#    #+#              #
#    Updated: 2019/04/20 15:47:56 by kzouggar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(SRCS))
CFLAGS = -Wall -Wextra -Werror
CC = gcc $(CFLAGS)


all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $@ $^
	ranlib $@

%.o : %.c
	$(CC) -c $(SRCS)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all

