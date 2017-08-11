# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/11 11:29:53 by clebarbi          #+#    #+#              #
#    Updated: 2017/08/11 11:36:00 by clebarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

var=$(ifconfig | grep "inet " | cut -d' ' -f2 | sort -nt 1)
if test -z "$var"
	then
		echo "Je suis perdu!"
	else
		echo $var | tr ' ' '\n'
fi
