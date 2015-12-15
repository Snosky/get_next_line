/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bcopy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/05 14:42:13 by tpayen            #+#    #+#             */
/*   Updated: 2015/03/05 14:57:16 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bcopy(char *src, char *dest, int len)
{
	char	*lasts;
	char	*lastd;

	if (dest < src)
		while (len--)
			*dest++ = *src++;
	else
	{
		lasts = src + (len - 1);
		lastd = dest + (len - 1);
		while (len--)
			*(char *)lastd-- = *(char *)lasts--;
	}
}
