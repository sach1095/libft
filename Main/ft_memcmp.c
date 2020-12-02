
#include <stdio.h>
#include <string.h>

int main()
{
	char *d = "couco1 frerot";
	char *s = "couco0 frerot";
	size_t x = 10;
	int lol = ft_memcmp(d, s, x);
	int lol2 = memcmp(d, s, x);
	printf("\n%d\n%d\n", lol, lol2);
}