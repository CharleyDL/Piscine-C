#include <stdio.h>
#include "ft_recursive_factorial.h"

int main ()
{
	int nb = 13;
	int result;
	
	result = ft_recursive_factorial(nb);
	printf("%d", result);
	return(0);
}
