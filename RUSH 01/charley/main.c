#include <stdio.h>
#include <unistd.h>

int ft_count_lines(char *line, int tab[9][9], int j)
{	
	int i;

	i = 0;
	while (line[i] != 0)
	{
		if (!(line[i] == 46 || (line[i] >= 48 && line[i] <= 57)))
			return (1);
		tab[j][i] = line[i] - 48;
		printf("%d ",tab[j][i]);
		i++;
	}
	if (i != 9)
		return (1);
	return (0);
}

int main(int argc,char **argv)
{
	int tab[9][9];
	int i;


	i = 0;

	if (argc != 10)
	{
		write(1,"Error\n",6);
		return (0);
	}

	while(i  < 9)
	{
		if(ft_count_lines(argv[i +1],tab,i) == 1)
		{
			write(1,"Error\n",6);
			return 0;	
		}
	i++;
	}

	return 0;
}
