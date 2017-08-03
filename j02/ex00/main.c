/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 13:39:57 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/02 13:53:59 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_alphabet.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	ft_print_alphabet();
	return(0);
}
