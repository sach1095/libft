
#include <stdio.h>
#include <string.h>
int main()
{
	char *d = "hello boys";
	char *s = "coucou frerot";
	size_t x = 10;
	size_t lol = ft_strlcat(d, s, x);
	size_t loll = strlcat(d, s, x);
	printf("\n%ld\n", lol);
	printf("\n%ld\n", loll);
}