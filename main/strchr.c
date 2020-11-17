
#include <stdio.h>

int main()
{
	char *s = "coucou ma bite";
	int a = 'c';
	char *kiki = ft_strrchr(s, a);
	printf("\n%s\n", kiki);
}