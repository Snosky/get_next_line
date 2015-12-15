/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 15:57:56 by tpayen            #+#    #+#             */
/*   Updated: 2015/01/15 18:51:09 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_t;

	s_t = (char *)s;
	while (*s_t && *s_t != c)
		s_t++;
	if (c == 0)
		return (s_t++);
	if (*s_t == 0)
		return (NULL);
	return (s_t);
}
