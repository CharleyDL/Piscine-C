#include <stdio.h>
#include "ft_sort_integer_table.h"

int main ()
{
	int tab[] = {-89, 13, -28, 78, 92};
	int size = 5;
	ft_sort_integer_table(tab, size);
	printf("%d, %d, %d, %d, %d\n", tab[0],tab[1],tab[2],tab[3],tab[4]);
}
