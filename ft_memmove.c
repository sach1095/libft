#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char 	*d;
	char 	*s;

	i = 0;
	d = dest;
	s = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest == src)
		return (dest);
	while (i < n)
	{
		*(d + i) = *(s + i);
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = dest;
	s = (char *)src;
	i = 0;
	if (d == s)
		return (dest);
	else if (d > s)
	{
		i = len - 1;
		while (len > 0)
		{
			d[i] = s[i];
			i--;
			len--;
		}
	}
	else
		dest = ft_memcpy(d, s, len);
	return (dest);
}
