/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaranes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:37:49 by sbaranes          #+#    #+#             */
/*   Updated: 2020/11/23 13:37:50 by sbaranes         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	x;

	if (!s1 || !s2)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) *
		(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	i = 0;
	x = 0;
	while (s1[i])
	{
		str[x++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[x++] = s2[i];
		i++;
	}
	str[x] = '\0';
	return (str);
}
