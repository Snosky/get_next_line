/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 17:34:44 by tpayen            #+#    #+#             */
/*   Updated: 2015/03/27 08:42:09 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ret;
	int	i;

	i = 0;
	if (!(ret = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while (size--)
	{
		ret[i] = 0;
		i++;
	}
	return (ret);
}
