/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 13:37:25 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/11 13:44:30 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int x;
	int maximum;

	x = 0;
	maximum = 0;
	while (x < length)
		if (maximum < tab[x])
			maximum = tab[x];
		x++;
	return (maximum);
}
