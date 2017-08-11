/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 19:43:13 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/09 19:43:22 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_nbr(int nbr)
{
	if (nbr < 10)
		ft_putchar(nbr + '0');
	else
	{
		ft_print_nbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			nb = nb / 10;
			ft_print_nbr(-nb);
			ft_putchar('8');
		}
		else
		{
			ft_print_nbr(-nb);
		}
	}
	else
		ft_print_nbr(nb);
}
