# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/14 20:53:23 by clebarbi          #+#    #+#              #
#    Updated: 2017/08/14 20:57:50 by clebarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bim/sh
gcc -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar rc libf.a ft_putchar.o ft_putstr.o	ft_strcmp.o ft_strlen.o ft_swap.o
ranlib libf.a
