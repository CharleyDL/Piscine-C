#include <stdio.h>

char	*ft_strdup(char *src);

int main(int argc, char **argv)
{
	char *ret;
	if(argc > 1)
	{
		ret = ft_strdup(argv[1]);
		printf("%s", ret);
	}
	return 0;
}
