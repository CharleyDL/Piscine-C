/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 14:42:49 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/17 21:36:37 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

int		ft_count_words(char *str)
{
	int words;
	int x;

	words = 0;
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] <= ' ')
		{
			if (str[x - 1] > ' ')
			{
				words++;
			}
		}
		x++;
	}
	words++;
	return (words);
}

char	*ft_count_char(char *str, int *index)
{
	char	*word;
	int		x;
	int		start;
	int		end;

	x = *index;
	while (str[x] <= ' ')
		x++;
	start = x;
	while (str[x] > ' ')
		x++;
	end = x;
	*index = x;
	word = (char*)malloc(sizeof(char) * (end - start + 1));
	x = 0;
	while (start < end)
	{
		word[x] = str[start];
		start++;
		x++;
	}
	word[x] = '\0';
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		y;
	int		x;

	tab = (char**)malloc(sizeof(char*) * (ft_count_words(str) + 1));
	y = 0;
	x = 0;
	while (y < ft_count_words(str + 1))
	{
		tab[y] = ft_count_char(str, &x);
		y++;
	}
	tab[y] = 0;
	return (tab);
}
