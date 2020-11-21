
#include <stdio.h>
char	ft_toupper_XD( unsigned int a, char c)
{
	if ((int)a < 0)
		return (c);
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int main()
{
	char const *s = "coucou lol";
	char *str = ft_strmapi(s , &ft_toupper_XD);
	printf("\n%s\n", str);
}