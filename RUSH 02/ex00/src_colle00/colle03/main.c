/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkleman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 16:38:08 by jkleman           #+#    #+#             */
/*   Updated: 2017/08/20 17:48:58 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tools.h"
#include "ft_colle.h"

int		main(int argc, char **argv)
{
	int x;
	int y;

	if (argc != 3)
		return (0);
	if (ft_strcmp(argv[0], "./colle-03") == 0)
	{
		x = ft_atoi(argv[1]);
		y = ft_atoi(argv[2]);
		colle03(x, y);
	}
	return (0);
}
