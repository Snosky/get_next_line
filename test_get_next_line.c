/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_get_next_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 17:26:30 by tpayen            #+#    #+#             */
/*   Updated: 2016/01/13 19:34:22 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#define BUFF_SIZE 32
#include <stdio.h>
#include <fcntl.h>

int	ft_strchrpos(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (i);
	return (-1);
}

int	get_next_line(int fd, char **line)
{
	int			pos = 0;
	int			buffid;
	char		buff[BUFF_SIZE + 1];

	while ((buffid = read(fd, buff, BUFF_SIZE)))
	{
		if (buffid == -1)
			return (-1);
		buff[buffid] = 0;
		if (ft_strchr(buff, '\n'))
		{
			pos = ft_strchrpos(buff, '\n');
			*line = ft_strjoin(*line, ft_strsub(buff,0 , pos));
			return (1);
		}
		*line = ft_strjoin(*line, buff);
	}
	return (0);
}

int main(void)
{
	char *test;
	int	fd;

	fd = open("test", O_RDONLY);

	//while (get_next_line(fd, &test))
	get_next_line(fd, &test);
	ft_putendl(test);
	get_next_line(fd, &test);
	ft_putendl(test);
	return  (0);
}
