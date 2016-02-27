/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 14:58:34 by tpayen            #+#    #+#             */
/*   Updated: 2016/02/27 15:35:26 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	check_for_line(char **prev, char **line)
{
	char	*n;

	if ((n = ft_strchr(*prev, '\n')))
	{
		*n = '\0';
		*line = ft_strdup(*prev);
		*prev = ft_strdup(n + 1);
		return (1);
	}
	return (0);
}

int			get_next_line(int fd, char **line)
{
	static char	*prev = NULL;
	int			bid;
	char		buff[BUFF_SIZE + 1];

	if (prev != NULL && check_for_line(&prev, line))
		return (1);
	while ((bid = read(fd, buff, BUFF_SIZE)))
	{
		if (bid == -1)
		{
			free(prev);
			return (-1);
		}
		buff[bid] = '\0';
		prev = ft_strjoin(prev, buff);
		if (check_for_line(&prev, line))
			return (1);
	}
	return (0);
}
