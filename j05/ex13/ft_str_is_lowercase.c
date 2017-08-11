/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:06:39 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/11 15:08:31 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
			if (str[x] >= 'a' && str[x] <= 'z')
				res = 1;
			else
				return (0);
			x++;
		}
	}
	return (res);
}
