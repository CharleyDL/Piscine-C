/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 17:03:56 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/15 22:07:59 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		ft_putchar(str[letter]);
		letter++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
		if (s1[x] == s2[x])
			x++;
		else
			return ((unsigned)s1[x] - (unsigned)s2[x]);
	return (0);
}

void	ft_sort(char **tab, int size)
{
	char *tmp;
	int x;
	int y;

	x = 0;
	while (x < size)
	{
		y = 1;
		while (y != size)
		{
			if (ft_strcmp(tab[x], tab[x + 1]) > 0)
			{
				tmp = tab[y];
				tab[y] = tab[y + 1];
				tab[y + 1] = tmp;
				y = 1;
			}
			else
				y++;
		}
		x++;
	}
}



int		main(int argc, char **argv)
{
	int x;

	x = 1;
	ft_sort(argv, argc - 1);
	while (x < argc)
	{
		ft_putstr(argv[x]);
		x++;
	}
	return (0);
}
