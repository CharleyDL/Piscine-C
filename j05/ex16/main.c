#include <stdio.h>
#include "ft_strcat.h"

int main ()
{
	char dest[] = "bonjour ";
	char src[] = "ca va";

	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
}
