void ft_print_words_tables(char **tab);
char **ft_split_whitespaces(char *str);

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_words_tables(ft_split_whitespaces(argv[1]));
	return 0;
}
