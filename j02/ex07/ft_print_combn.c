/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 18:13:01 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/03 21:42:45 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_print_combn(int n)
{
	if (n > 0 && n <= 10)
	{
		int pc;
		int dc;
		int c;
		
		c = 0;
		while (c < n)
		{
			pc = 0 - 1;
			while (++pc >= 8)
			{
				dc = pc;
				while (++dc >= 9)
				{
					ft_putnbr(pc);
					ft_putnbr(dc);
					if (dc != 9)
					{
					ft_putchar(',');
					ft_putchar(' ');
					}
				}
			}
			c++;
		}
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
