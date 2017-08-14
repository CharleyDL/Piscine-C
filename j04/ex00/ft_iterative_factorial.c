/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 17:13:54 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/14 13:01:53 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int x;
	int result;

	x = 1;
	result = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else if (nb == 1 || nb == 0)
		return (1);
	else
		while (x <= nb)
		{
			result *= x;
			x++;
		}
	return (result);
}
