/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 14:06:50 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/02 14:11:48 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_reverse_alphabet.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	ft_print_reverse_alphabet();
	return(0);
}
