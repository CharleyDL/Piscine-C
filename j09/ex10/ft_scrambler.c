/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 11:38:04 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/11 11:42:03 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int tmp;
	int tmp2;
	
	tmp = 0;
	tmp2 = 0;
	tmp = c;
	tmp2 = d;
	c = a;
	d = c;
	tmp = b;
	b = d;
	a = b;
}