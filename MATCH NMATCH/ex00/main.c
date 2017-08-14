#include <stdio.h>
int	match(char *s1, char *s2);

int main()
{
	char s1[] = "meaui.c";
	char s2[] = "m.c";
	printf("%d", match(s1, s2));
	return (0);
}
