/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 17:14:03 by tpayen            #+#    #+#             */
/*   Updated: 2015/01/21 18:36:15 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nb_words(char const *s, char c)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (s[i])
	{
		if (s[i] == c || s[i] == 0)
			ret++;
		i++;
	}
	return (ret);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		i;
	int		j;
	int		k;
	int		s_l;

	i = 0;
	j = 0;
	k = 0;
	s_l = ft_strlen(s) + 1;
	if (!(ret = (char **)malloc(sizeof(char *) * (nb_words(s, c) + 1))))
		return (NULL);
	while (s_l--)
	{
		if (s[i] != c && s[i] != 0)
			j++;
		else if (i && (s[i] == c || s[i] == '\0') && s[i - 1] != c)
		{
			if (!(ret[k++] = ft_strsub(s, i - j, j)))
				return (NULL);
			j = 0;
		}
		i++;
	}
	return (ret);
}
