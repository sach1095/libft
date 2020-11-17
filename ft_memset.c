#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char 	*str;

	str = (char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
