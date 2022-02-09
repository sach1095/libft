/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaranes <sbaranes@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:55:53 by sbaranes          #+#    #+#             */
/*   Updated: 2020/11/29 18:03:57 by sbaranes         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *lol;

	if (!(lol = malloc(sizeof(t_list))))
		return (NULL);
	(*lol).content = content;
	(*lol).next = NULL;
	return (lol);
}
