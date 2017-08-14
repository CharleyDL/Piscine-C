#include <stdio.h>
#include <string.h>

char	ft_strncat(char *dest, char *src, int nb);

int main()
{
	char dest[30] = "bonjour ";
	char src[] = "ca va toi";
	int nb = 5;

	ft_strncat(dest, src, nb);
	printf("%s", dest);
/*	printf("\n");
	strncat(dest, src, nb);
	printf("%s", dest);*/
	return (0);
}
