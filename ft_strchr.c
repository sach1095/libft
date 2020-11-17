#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (s[i] == '\0')
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char*)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char*)&s[i]);
	return (NULL);
}
