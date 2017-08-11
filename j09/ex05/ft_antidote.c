/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:35:07 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/11 10:44:01 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i <= j && i >= k) || (i >= j && i <= k))
		return (i);
	else if((j >= i && j <= k) || (j <= i && j >= k))
		return (j);
	else if ((k >= i && k <= j) || (k <= i && k >= j))
		return (k);
	return (0);
}
