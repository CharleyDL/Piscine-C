/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 13:51:02 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/11 14:00:09 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int x;
	int y;
	int cptr;

	x = 0;
	while (x < length)
	{
		y = 0;
		cptr = 0;
		while (tab[y] < length)
		{
			if (tab[y] == tab[x])
				cptr++;
			y++;
		}
		if (cptr / 2 == 1)
			return (tab[x]);
		x++;
	}
	return (0);
}
