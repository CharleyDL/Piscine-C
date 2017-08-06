/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 13:51:46 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/05 15:51:53 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_ultimate_div_mod.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ultimate_div_mod(int *a, int *b);

int		main()
{
	int a;
	int b;
	int *c;
	int *d;
	
	c = &a;
	d = &b;
	a = 89;
	b = 13;
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar('\n');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
	ft_putchar('\n');
	ft_putchar('\n');
	ft_ultimate_div_mod(c, d);
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar('\n');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
}
