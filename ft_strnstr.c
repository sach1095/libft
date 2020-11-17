#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t x;
	
	x = 0;
	if (n == 0)
		return (0);
	while ((s1[x] && s2[x]) && x < n - 1)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (s1[x] - s2[x]);
}


char	*ft_strnstr(const  char  * s1, const  char  * s2, size_t  n)
{
	size_t i;
	size_t size_s2;

	i = 0;
	if(s2[i] == '\0')
		return ((char*)s1);
	size_s2 = ft_strlen(s2);
	while (s1[i] && i <= (n - size_s2))
	{
		if (ft_strncmp(&s1[i], s2, size_s2) == 0)
			return ((char*)&s1[i]);
		i++;
	}
	return (NULL);
}
