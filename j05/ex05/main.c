#include <stdio.h>
#include "ft_strstr.h"

int main()
{
	char str[8] = "Bonjour";
	char tofind[1] = "j";
	char *ret;

	ret = ft_strstr(str, tofind);
	printf("%s", ret);
	return 0;
}
