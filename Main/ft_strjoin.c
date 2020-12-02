
#include <stdio.h>

int main()
{
	char const *s1 = "coucou mon ";
	char const *s2 = "frere aik";
	char *lol = ft_strjoin(s1, s2);
	printf("\n%s\n", lol);
}