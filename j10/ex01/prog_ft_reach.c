/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 21:48:38 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/23 11:58:42 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



void	ft_putchar(char c)
{
	write(1,&c, 1);
}

void	ft_print_nbr(int nbr)
{
	if (nbr <		10)
		ft_putchar(nbr + '0');
	else
	{
		ft_print_nbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
}

void	ft_putnbr(int nb)
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



void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int x;

	x = 0;
	while(x < length)
	{
		(*f)(tab[x]);
		x++;
	}
}

int main()
{
	void(*f)(int);
	f = &ft_putnbr;
	int tab[3] = {20, 13, 89};
	int length = 3;
	
	ft_foreach(tab, length, &ft_putnbr);
}
