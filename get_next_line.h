/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 08:00:57 by tpayen            #+#    #+#             */
/*   Updated: 2015/12/09 19:08:37 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# include "libft/libft.h"
# define BUFF_SIZE 8

typedef struct	s_file
{
	char	*file;
	int		fd;
}				t_file;

int				get_next_line(int fd, char **line);
#endif
