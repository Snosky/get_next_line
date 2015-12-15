/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 18:28:51 by tpayen            #+#    #+#             */
/*   Updated: 2015/01/21 19:31:10 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*tmp;

	ret = NULL;
	while (lst != NULL)
	{
		if (!(tmp = ft_lstnew(lst->content, lst->content_size)))
			return (NULL);
		ft_lstpush(&ret, (*f)(tmp));
		lst = lst->next;
		free(tmp);
	}
	return (ret);
}
