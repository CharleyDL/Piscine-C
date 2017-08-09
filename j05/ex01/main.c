#include <unistd.h>
#include "ft_putnbr.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	int nb = 895464;
	ft_putnbr(nb);
}
