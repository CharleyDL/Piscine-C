/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 10:27:32 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/10 11:33:14 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index >= 47)
		return (0);
	else if (index < 0)
		return (-1);
	else if (index == 0 || index == 1)
		return (1);
	else if (index >= 0)
		index = ft_fibonacci(index - 1) + (ft_fibonacci(index - 2));
	return (index);
}
