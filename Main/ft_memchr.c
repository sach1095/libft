
#include <stdio.h>

int main()
{
	char *d = "coucou ma 0 ca va 0 lol";
	int s = 48;
	size_t x = 24;
	char *lol = ft_memchr(d, s, x);
	printf("\n%s .\n", lol);
}