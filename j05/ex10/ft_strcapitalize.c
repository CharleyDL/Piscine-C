/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 14:47:16 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/15 16:38:54 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_minuscule(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] = str[x] - 'A' + 'a';
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int x;

	x = 0;
	ft_minuscule(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 'a' + 'A';
	while (str[x] != '\0')
	{
		if ((str[x] >= ' ' && str[x] <= '/') ||
				(str[x] >= ':' && str[x] <= '@'))
			if (str[x + 1] >= 'a' && str[x + 1] <= 'z')
				str[x + 1] = str[x + 1] - 'a' + 'A';
		x++;
	}
	return (str);
}
