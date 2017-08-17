/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 13:03:59 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/17 14:20:11 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_calcul_length(int argc, char **argv)
{
	int x;
	int length;

	while (argc > 1)
	{
		x = 0;
		while (argv[x] != '\0')
		{
			x++;
		}
		length += x;
		argc--;
	}
	return (length);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		x;
	int		y;
	int		z;
	int		length;
	char	*cat;

	x = 1;
	y = 0;
	z = 0;
	length = ft_calcul_length(argc, argv);
	cat = (char*)malloc(sizeof(char*) * (length + 1));
	while (x < argc)
	{
		while (argv[x][y])
			cat[z++] = argv[x][y++];
		x++;
		y = 0;
		if (x < argc)
			cat[z++] = '\n';
	}
	cat[z] = '\0';
	return (cat);
}
