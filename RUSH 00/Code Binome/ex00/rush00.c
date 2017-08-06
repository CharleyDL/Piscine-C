/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvigne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 09:26:30 by mvigne            #+#    #+#             */
/*   Updated: 2017/08/06 08:16:46 by mvigne           ###   ########.fr       */
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
			if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1)
			|| (i == y - 1 && j == 0) || (i == 0 && j == x - 1))
				ft_putchar('o');
			else if (((i != 0 && i != y - 1) && (j == 0 || j == x - 1)))
				ft_putchar('|');
			else if ((i == 0 || i == y - 1) || (i == 0 && j == x - 1)
				|| (i == y - 1 && j == 0))
				ft_putchar('-');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
