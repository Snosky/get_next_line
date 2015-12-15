/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 16:08:10 by tpayen            #+#    #+#             */
/*   Updated: 2015/01/21 16:37:11 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s2)
		return ((char *)s1);
	while (n-- && s1[i])
	{
		if (s2[j] == 0)
			return ((char *)(&s1[i - j]));
		else if (s1[i] == s2[j])
			j++;
		i++;
	}
	if (s2[j] == 0)
		return ((char *)(&s1[i - j]));
	return (NULL);
}
