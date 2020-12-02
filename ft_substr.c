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
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (src[x] && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;

    if (!s)
        return (NULL);
    else if (start == 0 && len > ft_strlen(s))
        return (ft_strdup(s));
    else if (start > ft_strlen(s))
        return (ft_calloc(1, 1));
    else
    {
        if (!(str = malloc(sizeof(char)* (ft_strlen(s + start)))))
            return (NULL);
        str = ft_strncpy(str, (char *)(s + start), len);
    }
    return (str);
}
