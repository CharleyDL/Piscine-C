/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:23:59 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/11 15:27:19 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int x;
	int res;

	x = 0;
	res = 0;
	if (str[0] == '\0')
		res = 1;
	else
	{
		while (str[x] != '\0')
		{
			if (str[x] >= 'A' && str[x] <= 'Z')
				res = 1;
			else
				return (0);
			x++;
		}
	}
	return (res);
}
