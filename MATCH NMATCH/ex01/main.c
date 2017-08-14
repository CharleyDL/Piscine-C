#include <stdio.h>
int		nmatch(char *s1, char *s2);

int main()
{
	char s1[] = "abc";
	char s2[] = "a**";
	printf("%d", nmatch(s1, s2));
	return (0);
}
