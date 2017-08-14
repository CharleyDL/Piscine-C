/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 10:27:32 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/14 12:20:47 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index >= 47)
		return (0);
	else if (index < 0)
		return (-1);
	else if (index == 0 || index == 1)
		return (index);
	else
		index = ft_fibonacci(index - 1) + (ft_fibonacci(index - 2));
	return (index);
}
