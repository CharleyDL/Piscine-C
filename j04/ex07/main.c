#include <stdio.h>
#include "ft_find_next_prime.h"

int main ()
{
	int nb;
	int result;
	nb = 24;

	result = ft_find_next_prime(nb);
	printf("%d", result);
}
