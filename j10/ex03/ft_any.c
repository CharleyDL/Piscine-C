/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 12:38:19 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/24 16:01:28 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int x;

	x = 0;
	while (tab[x])
	{
		if (f(tab[x]) == 1)
			return (1);
		x++;
	}
	return (0);
}
