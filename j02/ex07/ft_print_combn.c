/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 12:50:07 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/21 12:50:53 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_tab(int tab[], int tof);

void	ft_recc(int n, int a, int first, int tab[]);

void	ft_print_nbr(int nbr);

void	ft_print_combn(int n)
{
	int tab[10];
	int first;
	int a;

	tab[0] = 10;
	tab[1] = 10;
	tab[2] = 10;
	tab[3] = 10;
	tab[4] = 10;
	tab[5] = 10;
	tab[6] = 10;
	tab[7] = 10;
	tab[8] = 10;
	first = 1;
	a = 10 - n;
	if (n > 0 && n < 10)
		ft_recc(n, a, first, tab);
	ft_print_tab(tab, 1);
}

void	ft_recc(int n, int a, int first, int tab[])
{
	int i;

	if (first == 0)
		i = tab[a - 1] + 1;
	else
	{
		i = 0;
		first = 0;
	}
	while (i <= a)
	{
		if (n > 1)
		{
			tab[a] = i;
			ft_recc(n - 1, a + 1, first, tab);
		}
		tab[a] = i;
		if (i != a)
			ft_print_tab(tab, 0);
		i++;
	}
}

void	ft_print_tab(int tab[], int tof)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (tab[i] < 10)
			ft_print_nbr(tab[i]);
		i++;
	}
	if (tof != 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_nbr(int nbr)
{
	if (nbr < 10)
		ft_putchar(nbr + '0');
	else
	{
		ft_print_nbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
}
