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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	if (start == 0 && len > ft_strlen(s))
		return (ft_strdup(s));
	if (start > ft_strlen(s))
		return (ft_calloc(1, 1));
	if (!(str = malloc(sizeof(char)* (ft_strlen(s + start) + 1))))
		return (NULL);
	while (i < len)
		ft_memcpy(str, s, ft_strlen(s + start));
	str[i] = '\0';
	return (str);
}
