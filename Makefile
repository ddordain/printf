# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 14:44:10 by ddordain          #+#    #+#              #
#    Updated: 2021/12/03 17:52:32 by ddordain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printchar.c \
	ft_printf.c \
	ft_printhex.c \
	ft_printhexup.c \
	ft_printint.c \
	ft_printp.c \
	ft_printstr.c \
	ft_printuint.c \

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -I . -c $< -o $@

$(NAME): $(OBJ)
	ar rc  $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all
