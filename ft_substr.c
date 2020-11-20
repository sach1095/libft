#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	x;
	char	*str;

	i = 0;
	x = 0;
	if (!(str = (char*)malloc(sizeof(*s) * (len + 1))))
		return (NULL);
	while (s[i])
	{
		if (i >= start && x < len)
		{
			str[x] = s[i];
			x++;
		}
		i++;
	}
	str[x] = '\0';
	return (str);
}
