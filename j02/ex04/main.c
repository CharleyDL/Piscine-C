/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 16:23:47 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/02 18:23:57 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_comb.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	ft_print_comb();
	return(0);
}
