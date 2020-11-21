
#include <stdio.h>
int main()
{	
	char *str;
	int nb = 2147483647;
	str = ft_itoa(nb);
	printf("\n%s\n", str);
	return (0);
}