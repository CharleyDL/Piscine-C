#include <stdio.h>
#include "ft_strcpy.h"

int main()
{
	char src[8] = "Bonjour";
	char dest[8] = "hello";
	ft_strcpy(dest, src);

	printf("%s", dest);
	return (0);
}
