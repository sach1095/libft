/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaranes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 11:06:32 by sbaranes          #+#    #+#             */
/*   Updated: 2020/09/10 11:06:33 by sbaranes         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char * restrict dest, const char * restrict src, size_t size)
{
	size_t x;

	if (size == 0)
		return (ft_strlen(src));
	else
	{
		x = 0;
		while (x < size - 1 && src[x] != '\0')
		{
			dest[x] = src[x];
			x++;
		}
		dest[x] = '\0';
	}
	return (ft_strlen(src));
}
