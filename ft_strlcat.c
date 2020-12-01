/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaranes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:38:49 by sbaranes          #+#    #+#             */
/*   Updated: 2020/11/23 13:40:49 by sbaranes         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
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
