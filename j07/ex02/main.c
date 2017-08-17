#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main()
{
	int *table;
	int i = 0;
	int **range;

	table = ft_ultimate_range(range, 10, 20);

	while (table[i])
	{
		printf("%i, %i\n",i, table[i]);
		i++;
	}
	return 0;
}
