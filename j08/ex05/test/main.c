#include "ft_stock_par.h"

int main(int argc, char **argv)
{
	if(argc > 1)
		ft_show_tab(ft_param_to_tab(argc, argv));
	else
		return (0);
}
