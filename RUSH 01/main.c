/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:59:54 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/12 19:09:59 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_grid(char **argv)
{
	int x;
	int y;

	x = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			ft_putchar(argv[x][y] +'0');
			if (y != 8)
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}

int		ft_char_to_int(char **argv)
{
	int x;
	int y;

	x = 1;
	while (argv[x] != '\0')
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			if (argv[x][y] >= '1' && argv[x][y] <= '9')
				argv[y] = argv[y] - '0';
			else if (argv[x][y] == '.')
				argv[y] = 0;
			y++;
		}
		x++;
	}
	return (argv[x][y]);
}

int		ft_check_error(int argc, char **argv)
{
	int x;
	int y;

	x = 1;
	if (argc != 10)
		return (1);
	while (x <= 10)
	{
		y = 0;
		while (argv[x][y])
			y++;
		if(y != 9)
			return (1);
		x++;
	}
	return (0);
}

int main (int argc, char **argv)
{
	ft_write_grid(argv);
	if (argc > 1)
	{
		if (ft_check_error(argc, argv) == 1)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		else
			write(1, "YES", 3);
	}
	return (0);
}
