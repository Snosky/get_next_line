/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 08:14:38 by tpayen            #+#    #+#             */
/*   Updated: 2015/01/19 15:30:09 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	size_t				i;

	if (!dst || !src)
		return (NULL);
	i = 0;
	s1 = (unsigned char *)dst;
	s2 = (const unsigned char *)src;
	while (i < n)
	{
		if ((s1[i] = s2[i]) == (unsigned char)c)
			return (&(s1[i + 1]));
		i++;
	}
	return (NULL);
}
