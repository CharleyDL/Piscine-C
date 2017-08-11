#include <stdio.h>
#include "ft_strncmp.h"

int main()
{
	char s1[] = "Bonjour";
	char s2[] ="Bonsoir";
	int n = 5;

	printf("%d", ft_strncmp(s1, s2, n));
	return 0;
}
