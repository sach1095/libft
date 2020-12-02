
#include <stdio.h>
int main()
{
	char *res = NULL;
	char *s = "coucou tu fait quoi ";
	unsigned int st = 7;
	size_t l = 15;
	res = ft_substr(s, st, l);
	printf(" test 1 : %s.\n", res);

	char *s1 = "coucou ca va lol";
	int x = 7;
	size_t len = 5;
	char *res1 = ft_substr(s1, x, len);
	printf(" test 2 : %s.\n", res1);
	free(res);
	free(res1);
	return (0);


	char *res = NULL;
	char *s = "tripouille";
	unsigned int st = 1;
	size_t l = 1;
	res = ft_substr(s, st, l);
	printf(" test 1 : %s.\n", res);


}