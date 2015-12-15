/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 18:06:11 by tpayen            #+#    #+#             */
/*   Updated: 2015/01/15 18:10:21 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t old_size, size_t size)
{
	void	*ret;

	if (!ptr || !(ret = (void *)malloc(sizeof(void) * size)))
		return (NULL);
	if (old_size > size)
		ft_memcpy(ret, ptr, (size) ? size : sizeof(void));
	else
		ft_memcpy(ret, ptr, old_size);
	ft_memdel(&ptr);
	return (ret);
}
