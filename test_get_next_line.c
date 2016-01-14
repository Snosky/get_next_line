/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_get_next_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 17:26:30 by tpayen            #+#    #+#             */
/*   Updated: 2016/01/14 18:30:31 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#define BUFF_SIZE 8
#include <stdio.h>
#include <fcntl.h>

typedef struct s_pos
{
	int	nb_while;
	int	pos;
}			t_pos;
/*
int	ft_strchrpos(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (i);
	return (-1);
}*/

int	get_line(char *buff, t_pos *last_pos, int nb_while, char **line)
{
	int	start;
	int	end;

	start = 0;
	end = 0;
	if (last_pos->nb_while == nb_while)
		start = last_pos->pos;
	end = start;
	while (buff[end] && buff[end] != '\n')
		end++;
	last_pos->nb_while = nb_while;
	last_pos->pos = (start < end) ? end + 2 : start + 22;
	*line = ft_strjoin(*line, ft_strsub(buff, start, end));
	if (buff[end] == '\n')
		return (1);
	return (0);
}

int	get_next_line(int fd, char **line)
{
	static t_pos	last_pos = {0, 0};
	int			buffid;
	char		buff[BUFF_SIZE + 1];
	int			i;

	i = 0;
	while ((buffid = read(fd, buff, BUFF_SIZE)))
	{
		if (buffid == -1)
			return (-1);
		buff[buffid] = 0;
		if (ft_strchr(buff, '\n'))
		{
			if (get_line(buff, &last_pos, i, line))
				return (1);
			//pos = ft_strchrpos(buff, '\n');
			//last_pos = (BUFF_SIZE * i) + pos;
			//*line = ft_strjoin(*line, ft_strsub(buff,0 , pos));
		}
		else
			*line = ft_strjoin(*line, buff);
		i++;
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
	ft_putstr("LINE: ");
	ft_putendl(test);
	get_next_line(fd, &test);
	ft_putstr("LINE: ");
	ft_putendl(test);
	return  (0);
}
