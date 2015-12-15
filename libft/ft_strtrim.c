/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 17:04:16 by tpayen            #+#    #+#             */
/*   Updated: 2015/01/21 17:51:18 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		finish;

	start = 0;
	finish = ft_strlen(s) - 1;
	while (ft_isspace(s[start]))
		start++;
	while (ft_isspace(s[finish]) && finish >= start)
		finish--;
	return (ft_strsub(s, start, finish - start + 1));
}
