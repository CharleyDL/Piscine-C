# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/14 20:53:23 by clebarbi          #+#    #+#              #
#    Updated: 2017/08/20 11:16:14 by clebarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bim/sh
gcc -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c ft_atoi.c ft_putnbr.c ft_split_whitespaces.c ft_strcat.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strstr.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o ft_atoi.o ft_putnbr.o ft_split_whitespaces.o ft_strcat.o ft_strcmp.o ft_strcpy.o ft_strdup.o ft_strstr.o
ranlib libft.a
