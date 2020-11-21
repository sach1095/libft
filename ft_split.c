#include "libft.h"

size_t		ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t		count_split(char const *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char		**split_split(char const *s, char c, char **dest, size_t count)
{
	size_t i;
	size_t x;
	size_t y;

	i = 0;
	x = 0;
	while (s[i] && x < count)
	{
		y = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			dest[x][y] = s[i];
			i++;
			y++;
		}
		dest[x][y] = '\0';
		x++;
	}
	dest[x] = 0;
	return (dest);
}

char		**ft_split(char const *s, char c)
{
	size_t i;
	size_t count;
	char **dest;

	count = count_split(s, c);
	i = 0;
	if (!(dest = (char**)malloc(sizeof(char*) * (count + 1))))
		return (0);
	while (i != count)
	{
		if (!(dest[i] = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
			return (0);
		i++;
	}
	if (!(dest[i] = (char *)malloc(sizeof(char))))
		return (0);
	dest[i] = 0;
	dest = split_split(s, c, dest, count);
	return (dest);
}
