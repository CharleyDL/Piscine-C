#include <stdio.h>
#include "ft_iterative_factorial.h"
int main ()
{
	int nb;

	nb = 13;
	printf("%d", nb);
	nb = ft_iterative_factorial(nb);
	printf("\n");
	printf("%d", nb);
}
