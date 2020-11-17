/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaranes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 20:19:01 by sbaranes          #+#    #+#             */
/*   Updated: 2020/09/17 20:19:04 by sbaranes         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (src[x])
		x++;
	if (!(dest = (char*)malloc(sizeof(char) * x + 1)))
		return (0);
	while (src[y])
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';
	return (dest);
}
