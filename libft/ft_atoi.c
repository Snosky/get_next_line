/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 16:18:45 by tpayen            #+#    #+#             */
/*   Updated: 2015/01/21 18:12:49 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				ret;
	int				i;
	int				first;
	unsigned char	*tmp;

	ret = 0;
	i = 0;
	tmp = (unsigned char *)str;
	while (tmp[i] && tmp[i] != 128 &&
			!ft_isalnum(tmp[i]) && tmp[i] != '+' && tmp[i] != '-')
		i++;
	first = i;
	if (!tmp[i])
		return (0);
	else if (tmp[i] == '+' || tmp[i] == '-')
		i += 1;
	while (tmp[i] && tmp[i] >= '0' && tmp[i] <= '9')
	{
		ret = ret * 10 + (tmp[i] - 48);
		i++;
	}
	if (tmp[first] == '-')
		ret *= -1;
	return (ret);
}
