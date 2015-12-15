/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 15:41:36 by tpayen            #+#    #+#             */
/*   Updated: 2015/01/21 14:31:50 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_l;
	size_t	src_l;

	i = 0;
	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	if (!size)
		return (dst_l);
	if (size - 1 <= dst_l)
		return (src_l + size);
	while (dst_l + i < size - 1)
	{
		dst[dst_l + i] = src[i];
		i++;
	}
	dst[dst_l + i] = 0;
	return (dst_l + src_l);
}
