/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 16:01:35 by tpayen            #+#    #+#             */
/*   Updated: 2015/01/20 16:09:50 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_t;
	char	*last_occ;

	s_t = (char *)s;
	last_occ = NULL;
	while (*s_t)
	{
		if (*s_t == c)
			last_occ = s_t;
		s_t++;
	}
	if (c == 0)
		return (s_t);
	if (last_occ)
		return (last_occ);
	return (NULL);
}
