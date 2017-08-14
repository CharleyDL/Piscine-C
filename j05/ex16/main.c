#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main ()
{
	char dest[25] = "bonjour";
	char src[] = "cava";

	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
}
