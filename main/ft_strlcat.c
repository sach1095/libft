#include <stdio.h>

int main()
{
	char *d = "hello boys";
	char *s = "coucou frerot";
	size_t x = 10;
	size_t lol = ft_strlcat(d, s, x);
	printf("\n%ld\n", lol);
}