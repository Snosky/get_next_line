/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 07:50:29 by tpayen            #+#    #+#             */
/*   Updated: 2015/04/07 19:07:54 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_buffer(int fd)
{
	char	buff[BUFF_SIZE + 1];
	char	*ret;
	int		buffid;

	ret = "";
	while ((buffid = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[buffid] = '\0';
		if (!(ret = ft_strjoin(ret, buff)))
			return (NULL);
	}
	if (buffid == -1)
		return (NULL);
	return (ret);
}

t_list	*get_file(t_list *list, int fd)
{
	while (list)
	{
		if (((t_file *)list->content)->fd == fd)
			return (list);
		list = list->next;
	}
	return (NULL);
}

t_file	*new_file(int fd)
{
	t_file	*ret;

	if (!(ret = (t_file *)malloc(sizeof(t_file))))
		return (NULL);
	if (!(ret->file = ft_buffer(fd)))
		return (NULL);
	ret->fd = fd;
	return (ret);
}

int		get_next_line(int fd, char **line)
{
	static t_list	*list = NULL;
	t_list			*tmp;
	t_file			*f;
	int				i;
	int				ret;

	i = 0;
	ret = 1;
	if (!line)
		return (-1);
	if (!(tmp = get_file(list, fd)))
	{
		if (!(f = new_file(fd)) ||
				!(tmp = ft_lstnew(f, sizeof(t_list))))
			return (-1);
		ft_lstadd(&list, tmp);
	}
	while (((t_file *)tmp->content)->file[i] &&
			((t_file *)tmp->content)->file[i] != '\n')
		i++;
	if (((t_file *)tmp->content)->file[i] == '\0')
		ret = 0;
	*line = ft_strsub(((t_file *)tmp->content)->file, 0, i);
	((t_file *)tmp->content)->file = ((t_file *)tmp->content)->file + (i + 1);
	return (ret);
}
