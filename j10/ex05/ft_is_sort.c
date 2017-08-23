/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 17:35:46 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/23 20:57:24 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int x;

	x = 0;
	while (x < length)
	{
		if (f(tab[x], tab[x + 1]) <= 0 || f(tab[x], tab[x + 1]) == 0)
			x++;
		else
		{
			x = 0;
			while (x < length)
			{
				if (f(tab[x], tab[x + 1]) <= 0 || f(tab[x], tab[x + 1]) == 0)
					x++;
				else
					return (0);
			}
		}
	}
	return (1);
}
