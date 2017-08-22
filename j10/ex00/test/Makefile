# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/22 11:09:52 by clebarbi          #+#    #+#              #
#    Updated: 2017/08/22 18:56:45 by clebarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
FLAGS = -Wall -Werror -Wextra

INCLUDES = includes
SRC = $(addprefix srcs/, $(C))

C = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
O = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
		$(CC) $(FLAGS) -c $(SRC) -I $(INCLUDES)
		ar rc $(NAME) $(O)
		ranlib $(NAME)

clean:
		rm -f $(O)

fclean: clean
		rm -f $(NAME)

re: fclean all
