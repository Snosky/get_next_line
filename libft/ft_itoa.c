/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 17:35:31 by tpayen            #+#    #+#             */
/*   Updated: 2015/01/20 17:39:14 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*ret;
	size_t			size;
	size_t			i;
	unsigned int	n_c;

	size = ft_intlen(n);
	i = 0;
	if (!(ret = ft_strnew(size + 1)))
		return (NULL);
	if (n < 0)
	{
		ret[0] = '-';
		n *= -1;
		i = 1;
	}
	n_c = (unsigned int)n;
	while (size-- > i)
	{
		ret[size] = n_c % 10 + '0';
		n_c /= 10;
	}
	return (ret);
}
