/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 11:25:39 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/09 13:01:44 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		ft_putchar(str[letter]);
		letter++;
	}
}
