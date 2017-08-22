/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 13:08:42 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/21 13:09:05 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int x;
	int words;

	x = 0;
	words = 0;
	while (str[x])
	{
		if (str[x] == ' ' || str[x] == '\n' || str[x] == '\t')
		{
			x++;
			if (str[x] != ' ' || str[x] != '\n' || str[x] != '\t')
				words++;
		}
		x++;
	}
	return (words + 1);
}

int		ft_count_char(char *str, int x)
{
	int cmpt;

	cmpt = 0;
	while (str[x] && str[x] != ' ' && str[x] != '\n' && str[x] != '\t')
	{
		x++;
		cmpt++;
	}
	return (cmpt);
}

char	**ft_split_whitespaces(char *str)
{
	int		x;
	int		y;
	int		z;
	char	**tab;

	x = 0;
	y = 0;
	if (!(tab = malloc(sizeof(char *) * (ft_count_words(str) + 1))))
		return (NULL);
	while (str[x])
	{
		z = 0;
		if (str[x] != ' ' && str[x] != '\n' && str[x] != '\t')
		{
			if (!(tab[y] = malloc(sizeof(char) * (ft_count_char(str, x)))))
				return (NULL);
			while (str[x] && str[x] != ' ' && str[x] != '\n' && str[x] != '\t')
				tab[y][z++] = str[x++];
			tab[y++][z] = '\0';
		}
		if (str[x])
			x++;
	}
	tab[y] = NULL;
	return (tab);
}
