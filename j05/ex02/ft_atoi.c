/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 14:23:52 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/09 14:52:23 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_discard_character(char a)
{
	if (a == '\t' || a == '\n' || a == '\r' || a  == '\v' || a == '\f')
		return (1);
	else if (a == ' ')
		return (1);
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
		x++;
	if (str[x] == '-')
	{
		pon = -1;
		x++;
	}
		else if (str[x] == '+')
		x++;
	else
		pon = 1;
	while (str[x] <= '9' && str[x] >= '0')
	{
		intprint = intprint * 10  + ((int)str[x] - '0');
		x++;
	}
	intprint *= pon;
	return (intprint);
}
