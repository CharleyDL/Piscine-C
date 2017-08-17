/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 17:02:48 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/17 12:39:49 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int x;

	x = 0;
	tab = (int*)malloc(sizeof(*tab) * (max - min + 1));
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		tab[x] = min;
		x++;
		min++;
	}
	tab[x] = '\0';
	return (tab);
}
