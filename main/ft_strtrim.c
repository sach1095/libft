
#include <stdio.h>

int main()
{
	char *s1 = "hello ca va mon hello friend hello";
	char *set = "hello ";
	char *result = ft_strtrim(s1, set);
	printf("\n%s.\n", result);
}