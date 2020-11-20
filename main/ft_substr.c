
#include <stdio.h>
int main()
{
	char *s = "coucou ca va lol";
	int x = 7;
	size_t len = 5;
	char *lol = ft_substr(s, x, len);
	printf("\n%s\n", lol);
}