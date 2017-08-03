/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 16:59:57 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/03 10:48:33 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char p;
	char d;
	char t;

	p = '0' - 1;
	while (++p <= '9')
	{
		d = p;
		while (++d <= '9')
		{
			t = d;
			while (++t <= '9')
			{
				ft_putchar(p);
				ft_putchar(d);
				ft_putchar(t);
				if (p != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
