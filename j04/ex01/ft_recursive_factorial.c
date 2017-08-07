/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:59:40 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/07 18:59:47 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb <= 0 || nb > 12)
		return(0);
	if (nb == 1)
		return(1);
	else
		return(nb * ft_recursive_factorial(nb - 1));
}
