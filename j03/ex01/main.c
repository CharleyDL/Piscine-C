/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 10:06:08 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/04 13:48:53 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_ultimate_ft.h"

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main ()
{
	int c;
	int *ptr;
	int	**ptr2 = &ptr;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
	int *********ptr9 = &ptr8;

	ptr = &c;
	ft_ultimate_ft(ptr9);
	ft_putchar(c / 10 + '0');
	ft_putchar(c % 10 + '0');
	return(0);
}
