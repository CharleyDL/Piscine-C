/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 19:47:29 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/09 11:16:18 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_eight_queens_puzzle_2(void)
{
	int i;
	int j;
	
	i = 1;
	j = 1;
	while (i < 8)
	{
		tab[i] = 1;
		while (j < i - 1)
			if (tab[i] == tab[j] || tab[i] - tab[j] == i - j)
				tab[i] == tab[i] + 1;
				if(tab[i] <= 8)
					i = i - 1;
				else if <>
	}
}
