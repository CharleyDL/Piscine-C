/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 18:51:42 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/21 19:55:54 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
	int letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		ft_putchar(str[letter]);
		letter++;
	}
}

void    ft_print_nbr(int nbr)
{
	if (nbr < 10)
		ft_putchar(nbr + '0');
	else
	{
		ft_print_nbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
}

void    ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			nb = nb / 10;
			ft_print_nbr(-nb);
			ft_putchar('8');
		}
		else
			ft_print_nbr(-nb);
	}
	else
		ft_print_nbr(nb);
}

void	ft_show_tab(struct s_stock_par *par)
{
	int x;

	while (par->str)
	{
		x = 0;
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		while ((par->tab)[x])
		{
			ft_putstr((par->tab)[x]);
			ft_putchar('\n');
			x++;
		}
		par++;
	}
}
