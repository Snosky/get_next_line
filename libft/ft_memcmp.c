/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 09:40:54 by tpayen            #+#    #+#             */
/*   Updated: 2015/01/19 15:59:26 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	size_t			n_c;
	unsigned char	*s1_c;
	unsigned char	*s2_c;

	i = 0;
	n_c = n;
	s1_c = (unsigned char *)s1;
	s2_c = (unsigned char *)s2;
	while (s1_c[i] & s2_c[i] && s1_c[i] == s2_c[i] && n_c--)
		i++;
	if (i >= n)
		i -= 1;
	return (s1_c[i] - s2_c[i]);
}
