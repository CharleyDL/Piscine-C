#include <stdio.h>
#include "ft_strncpy.h"

int main()
{
	char src[8] = "Bonjour";
	char dest[8] = "hello";
	int nb = 2;
	ft_strncpy(dest, src, nb);

	printf("%s", dest);
	return (0);
}
