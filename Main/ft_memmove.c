#include <string.h>
#include <stdio.h>

int main()
{
	char d[15];
	char *s = "lol ca va poto";
	size_t x = 10;
	ft_memmove(d, s, x);
	printf("\n%s .\n", d);

	char *s2 = "lol ca va poto";
	memmove(d, s2, x);
	printf("\n%s .\n", d);
}