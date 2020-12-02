
#include <stdio.h>
int main()
{
	char const *s = "coucou dit ou est mon du lol";
	char c = 'u';
	char **res = ft_split(s, c);
	int i = 0;
	while (i != 5)
	{
		printf("\n%s\n", res[i]);
		i++;
	}
}


#include <stdio.h>
int main ()
{
	char *s = "coucou comment tu va frero";
	char sep = ' ';
	char **dest = ft_split(s, sep);
	int i = 0;
	while (i < 5)
	{
		printf(" %s\n", dest[i]);
		i++;
	}
	free_all(dest, i);
	return (0);
}


#include <stdio.h>
int main()
{
	char *s = "        lolll     42    ";
	char sep = ' ';
	char **dest = ft_split(s, sep);
	int i = 0;
	while (i < 2)
	{
		printf(" %s\n", dest[i]);
		i++;
	}
	free_all(dest, i);
	return (0);
}