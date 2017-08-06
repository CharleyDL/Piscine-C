/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 11:20:22 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/06 14:51:47 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int tmp;
	int a;
	int b;

	a = 0;
	while (a < size)
	{
		b = 1;
		while (b != size)
		{
			if (tab[b] < tab[b - 1])
			{
				tmp = tab[b];
				tab[b] = tab[b - 1];
				tab[b - 1] = tmp;
				b = 1;
			}
			else
				b++;
		}
		a++;
	}
}
