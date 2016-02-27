/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 17:00:56 by tpayen            #+#    #+#             */
/*   Updated: 2016/02/27 15:10:50 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;

	if (s1 != NULL && s2 == NULL)
		return (ft_strdup(s1));
	if (s1 == NULL && s2 != NULL)
		return (ft_strdup(s2));
	if (s1 == NULL)
		return (NULL);
	if (!(ret = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	ret = ft_strcat(ret, s1);
	ret = ft_strcat(ret, s2);
	return (ret);
}
