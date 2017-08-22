#include <stdio.h>
#include "ft_strcmp.h"

int main ()
{
	char s1[] = "a";
	char s2[] = "ab";

	printf("%d", ft_strcmp(s1, s2));
	return 0;
}
