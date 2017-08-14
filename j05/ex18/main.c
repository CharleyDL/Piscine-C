#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest[] = "bonjour ";
	char src[] = "ca va";
	int size = 20;

	printf("%d", ft_strlcat(dest, src, size));
	return (0);
}
