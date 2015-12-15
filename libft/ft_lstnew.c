/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 18:16:44 by tpayen            #+#    #+#             */
/*   Updated: 2015/02/19 19:08:44 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ret;

	if (!(ret = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		content_size = 0;
		ret->content = NULL;
	}
	else
	{
		if (!(ret->content = (void *)malloc(sizeof(content_size + 1))))
			return (NULL);
		ret->content = ft_memcpy(ret->content, content, content_size);
	}
	ret->content_size = content_size;
	ret->next = NULL;
	return (ret);
}
