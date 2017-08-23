/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 12:05:15 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/23 17:53:10 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int x;
	int *ret;

	if (!(ret = malloc(sizeof(int) * (length))))
		return (NULL);
	x = 0;
	while (x < length)
	{
		ret[x] = (*f)(tab[x]);
		x++;
	}
	return (ret);
}
