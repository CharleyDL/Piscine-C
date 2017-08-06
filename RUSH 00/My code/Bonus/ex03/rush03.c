/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 10:11:24 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/05 13:56:10 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char);

void	ft_write_line(int x, char a, char b, char c)
{
	int cpt;

	if (x == 1)
	{
		ft_putchar(a);
	}
	if (x > 1)
	{
		ft_putchar(a);
		cpt = 0;
		while (cpt < x - 2)
		{
			ft_putchar(b);
			cpt++;
		}
		ft_putchar(c);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int cpt;

	if (x == 1)
	{
		ft_write_line(x,'A', 'B', 'C');
	}
	if (x > 1)
	{
		ft_write_line(x, 'A', 'B', 'C');
		cpt = 0;
		while (cpt < y - 2)
		{
			ft_write_line(x, 'B', ' ', 'B');
			cpt++;
		}
		ft_write_line(x, 'A', 'B', 'C');
	}
}
