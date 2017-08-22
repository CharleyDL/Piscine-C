# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/14 20:53:23 by clebarbi          #+#    #+#              #
#    Updated: 2017/08/22 13:08:20 by clebarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
gcc -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar rc libft.a ft_putchar.o ft_putstr.o	ft_strcmp.o ft_strlen.o ft_swap.o
ranlib libft.a
