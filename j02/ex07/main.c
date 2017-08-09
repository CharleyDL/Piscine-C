/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 16:23:47 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/09 12:32:41 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_combn.h"
#include "ft_putnbr.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	ft_print_combn(5);
	return(0);
}
