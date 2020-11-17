#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char 	*str;

	i = 0;
	str = (char*)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	if (!(dest = (void*)malloc(sizeof(size_t) * (count * size))))
		return (NULL);
	ft_bzero(dest, (count * size));
	return (dest);
}