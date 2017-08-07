#include <stdio.h>
#include "ft_iterative_power.h"

int		main()
{
	int nb = 5;
	int power = 5;
	int result;

	result = ft_iterative_power(nb, power);
	printf("%d", result);
	return(0);
}
