/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 11:04:00 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/11 11:13:12 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char*ft_strstr(char *str, char *to_find)
{
	int a;
	int		b;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		b = 0;
		if (str[a] == to_find[b])
		{
			while (str[a + b] == to_find[b])
			{
				b++;
				if (to_find[b] == '\0')
					return (str + a);
			}
		}
		a++;
	}
	return (0);
}

char	*ft_spy(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
		if (ft_strstr(str, "president"))
			return ("Alert!!!");
		else if (ft_strstr(str, "attack"))
			return ("Alert!!!");
		else if (ft_strstr(str, "Powers"))
			return ("Alert!!!");
	return();
}
