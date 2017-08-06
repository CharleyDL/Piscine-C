/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvigne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 09:26:30 by mvigne            #+#    #+#             */
/*   Updated: 2017/08/05 14:02:35 by mvigne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((i == 0 && j == 0) || (i == y - 1 && j == 0))
				ft_putchar('A');
			else if ((i == 0 && j == x - 1) || (i == y - 1 && j == x - 1))
				ft_putchar('C');
			else if (((i != 0 && i != y - 1) && (j == 0 || j == x - 1)))
				ft_putchar('B');
			else if ((i == 0 || i == y - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
