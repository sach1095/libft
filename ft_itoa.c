#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_itoa_lol(int nb, char **str, int t_base, char *base, int i)
{
	int long nbr = nb;

	if (nbr < 0)
	{
		str[0][i] = '-';
		i++;
		nbr *= -1;
	}
	str[0][i] = base[nbr % t_base];
	str[0][i + 1] = '\0';
	if ((nbr / t_base) > 0)
		ft_itoa_lol((nbr / t_base), str, t_base, base, i + 1);
}

char	*ft_rev(char *str, int size)
{
	int i = 0;
	int x = size - 1;
	int temp;

	if (str[0] == '-')
		i++;
	while (i < x)
	{
		temp = str[i];
		str[i] = str[x];
		str[x] = temp;
		i++;
		x--;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	char *str;
	char *base;

	base = "0123456789";
	int t_base = ft_strlen(base);
	if (!(str = (char *)malloc(sizeof(char) * 34)))
		return (0);
	ft_itoa_lol(nb, &str, t_base, base, 0);
	int t_str = ft_strlen(str);
	str = ft_rev(str, t_str);
	return (str);
}
