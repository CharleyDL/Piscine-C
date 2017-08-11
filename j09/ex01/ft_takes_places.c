/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_places.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:47:54 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/10 19:09:13 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_hours_pm(int hour, int h2)
{
	if (hour >= 13 && hour <= 22)
	{
		hour -= 12;
		h2 -= 12;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M AND %d.00 P.M.", hour, h2);
	}
	else if (hour == 23)
	{
		hour -= 12;
		h2 -= 12;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 A.M.", hour, h2);
	}
	else if (hour == 12)
	{
		h2 -= 12;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.", hour, h2);
	}
	return (0);
}

int	ft_hours_am(int hour, int h2)
{
	if (hour == 24)
	{
		hour -= 12;
		h2 -= 24;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.", hour, h2);
	}
	return (0);
}

void	ft_takes_places(int hour)
{
	int h2;

	h2 = hour + 1;
	if (hour >= 1 && hour <= 10)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.", hour, h2);
	else if (hour >= 13 && hour <= 22)
		ft_hours_pm(hour, h2);
	else if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 P.M.", hour, h2);
	else if (hour == 23)
		ft_hours_pm(hour, h2);
	else if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.", hour, h2);
	else if (hour == 24)
		ft_hours_am(hour, h2);
}
