/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 13:51:46 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/04 16:19:26 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_swap.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b);

int		main()
{
	int a;
	int b;
	int *ptra;
	int *ptrb;

	a = 42;
	b = 13;
	ptra = &a;
	ptrb = &b;
	ft_swap(ptra, ptrb);
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar('\n');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
}
