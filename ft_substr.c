/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaranes <sbaranes@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:41:08 by sbaranes          #+#    #+#             */
/*   Updated: 2020/11/30 19:13:44 by sbaranes         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_calloc_2(size_t size)
{
	char	*dest;
	size_t	i;

	if (!(dest = malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_calloc_2(1));
	if (!s || !(str = ft_calloc_2(ft_strlen(s) - start + 1)))
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
