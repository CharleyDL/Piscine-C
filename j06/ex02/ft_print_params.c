/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 21:42:36 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/15 13:32:08 by clebarbi         ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	int x;

	x = 1;
	if (argc >= 1)
	{
		while (argc != x)
		{
			ft_putstr(argv[x]);
			ft_putchar('\n');
			x++;
		}
	}
	return (0);
}
