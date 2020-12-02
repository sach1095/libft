#include <stdio.h>

int main()
{
	char d[10];
	int s = 48;
	size_t x = 9;
	char *lol = ft_memset(d, s, x);
	printf("\n%s\n", lol);
}