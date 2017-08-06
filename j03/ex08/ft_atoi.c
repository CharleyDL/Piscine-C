/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 11:12:49 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/06 11:16:50 by clebarbi         ###   ########.fr       */
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
	while (ft_discard_character(str[x]))
	{
		x++;
	}
	if (str[x] == '-')
	{
		pon = -1;
	}
	else
		pon = 1;
	while (str[x] != '\0')
	{
		intprint = intprint * 10 + (str[x] - '0');
		x++;
	}
	intprint *= pon;
	return (intprint);
}
