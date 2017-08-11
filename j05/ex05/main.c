#include <stdio.h>
#include "ft_strstr.h"

int main()
{
	char str[] = "Bonjorjoure";
	char tofind[] = "jou";

	printf("%s", ft_strstr(str, tofind));
	return 0;
}
