#include <stdio.h>
#include "ft_recursive_power.h"

int main ()
{
	int nb = 5;
	int power = 6;
	int result;

	result = ft_recursive_power(nb, power);
	printf("%d", result);
}
