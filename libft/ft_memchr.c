/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 09:27:35 by tpayen            #+#    #+#             */
/*   Updated: 2015/01/20 17:39:53 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_c;

	if (s)
	{
		i = 0;
		s_c = (unsigned char *)s;
		while (i < n)
		{
			if (s_c[i] == (unsigned char)c)
				return (&(s_c[i]));
			i++;
		}
	}
	return (NULL);
}
