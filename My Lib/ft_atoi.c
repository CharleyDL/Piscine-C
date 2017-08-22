/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 11:12:49 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/14 13:22:27 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_discard_character(char a)
{
	if (a == '\t' || a == '\n' || a == '\r')
	{
		return (1);
	}
	else if (a == '\v' || a == '\f' || a == ' ')
	{
		return (1);
	}
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int		x;
	int		intprint;
	int		pon;

	x = 0;
	intprint = 0;
	pon = 1;
	while (ft_discard_character(str[x]))
		x++;
	if (str[x] == '-')
		pon = -1;
	if (str[x] == '+' || str[x] == '-')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		intprint = intprint * 10;
		intprint = intprint + (str[x] - '0');
		x++;
	}
	intprint *= pon;
	return (intprint);
}
