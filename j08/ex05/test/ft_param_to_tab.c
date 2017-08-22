/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 15:11:52 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/21 18:50:46 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_strdup(char *src)
{
	char	*dup;
	int		x;

	x = 0;
	while (src[x] != '\0')
		x++;
	dup = (char*)malloc(sizeof(char) * (x + 1));
	x = 0;
	if (!dup)
		return (NULL);
	while (src[x] != '\0')
	{
		dup[x] = src[x];
		x++;
	}
	dup[x] = '\0';
	return (dup);
}

int					ft_strlen(char *str)
{
	int	cptr;

	cptr = 0;
	while (str[cptr] != '\0')
		cptr++;
	return (cptr);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			x;
	t_stock_par	*tab;

	x = 0;
	if (!(tab = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (NULL);
	while (x < ac)
	{
		tab[x].size_param = ft_strlen(av[x]);
		tab[x].str = av[x];
		tab[x].copy = ft_strdup(av[x]);
		tab[x].tab = ft_split_whitespaces(av[x]);
		x++;
	}
	return (tab);
}
