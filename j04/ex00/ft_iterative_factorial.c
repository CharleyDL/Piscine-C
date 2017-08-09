/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 17:13:54 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/09 13:09:44 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	if (nb < 0)
	{
		return(0);
	}
	if (nb == 1 || nb == 0)
		return (1);
	result = nb;
	if (nb >= 2 || nb <= 12)
		while (nb > 1)
		{
			nb--;
			result *= nb;
		}
	return(result);
}
