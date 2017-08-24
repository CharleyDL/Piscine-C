/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 17:35:46 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/24 15:53:24 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int x;
	int crois;
	int dcrois;

	x = 0;
	crois = 1;
	dcrois = 1;
	while (x < length - 1)
	{
		if (f(tab[x], tab[x + 1]) < 0)
			crois = 0;
		if (f(tab[x], tab[x + 1]) > 0)
			dcrois = 0;
		x++;
	}
	return (crois || dcrois);
}

int	ft(int a, int b)
{
	return (a - b);
}

int main(void)
{
	int tab[] = {5, 4, 3, 1, 1, 1};
	printf("%d", ft_is_sort(tab, 6, ft));
	return (0);
}

/*
croi = 1
dcroi = 1

while(x < lenght - 1)
	if si < 0
	croi 0
	if si > 0 
	dcroi 0

	return (croi || dcroi)*/
