
#include <stdio.h>
int main()
{
	char *d[20];
	char *s = "coucou frerot";
	size_t x = 13;
	char *lol = ft_memcpy(d, s, x);
	printf("\n%s\n", lol);
}