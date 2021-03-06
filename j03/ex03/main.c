/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 13:51:46 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/05 14:18:56 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_div_mod.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main()
{
	int a;
	int b;
	int division;
	int reste;
	int *div;
	int *mod;
	
	a = 89;
	b = 28;
	div = &division;
	mod = &reste;
	ft_div_mod(a, b, div, mod);
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar('\n');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
	ft_putchar('\n');
	ft_putchar(division / 10 + '0');
	ft_putchar(division % 10 + '0');
	ft_putchar('\n');
	ft_putchar(reste / 10 + '0');
	ft_putchar(reste % 10 + '0');
}
