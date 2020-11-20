#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		dico(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	a;
	size_t	z;

	i = 0;
	a = 0;
	z = ft_strlen(s1);
	while (s1[a++] && dico(s1[a], set));
	while (z-- > a && dico(s1[z - 1], set));
	if (!(str = (char*)malloc(sizeof(char) * (z - a + 1))))
		return (NULL);
	while (a < z)
		str[i++] = s1[a++];
	str[i] = '\0';
	return (str);
}
