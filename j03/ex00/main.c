/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 10:06:08 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/04 11:41:57 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_ft.h"

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main ()
{
	int c;
	int *ptr;
	
	c = 2;
	ptr = &c;
	ft_ft(ptr);
	ft_putchar(c / 10 + '0');
	ft_putchar(c % 10 + '0');
	return(0);
}
