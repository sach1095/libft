/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaranes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 14:54:36 by sbaranes          #+#    #+#             */
/*   Updated: 2020/09/13 14:54:37 by sbaranes         ###   ########lyon.fr   */
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

size_t	ft_strlcat(char * restrict dest, const char * restrict src, size_t size)
{
	size_t		i;
	size_t		t_dest;

	t_dest = ft_strlen(dest);
	i = 0;
	if (size <= t_dest)
		return (size + ft_strlen(src));
	while (t_dest + i < (size - 1) && src[i] != '\0')
	{
		dest[i + t_dest] = src[i];
		i++;
	}
	dest[i + t_dest] = '\0';
	return (t_dest + ft_strlen(src));
}
