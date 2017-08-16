/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 13:33:43 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/15 16:54:26 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)

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

	x = argc - 1;
	if (argc >= 1)
	{
		while (x > 0)
		{
			ft_putstr(argv[x]);
			ft_putchar('\n');
			x--;
		}
	}
	return (0);
}
