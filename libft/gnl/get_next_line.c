/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:09:40 by adpedrer          #+#    #+#             */
/*   Updated: 2024/08/15 18:10:54 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*get_next_line(int fd)
{
	static char	*rest_str[OPEN_MAX] = {0};
	char		*line;

	if (fd < 0 || fd >= OPEN_MAX)
		return (NULL);
	line = reader(fd, rest_str[fd]);
	rest_str[fd] = trimer(line);
	return (line);
}

char	*reader( int fd, char *buff)
{
	char	buffer[BUFFER_SIZE + 1];
	ssize_t	buff_read;

	buff_read = 1;
	while (!ft_strchr_gnl(buff, '\n') && buff_read != 0)
	{
		buff_read = read(fd, buffer, BUFFER_SIZE);
		if (buff_read == -1)
			return (free(buff), NULL);
		if (buff_read == 0)
			return (buff);
		buffer[buff_read] = '\0';
		buff = ft_strjoin_gnl(buff, buffer);
	}
	return (buff);
}

char	*trimer(char *line)
{
	char	*newline_position;
	char	*rest;

	newline_position = ft_strchr_gnl(line, '\n');
	if (!newline_position++)
		return (NULL);
	rest = ft_strdup_gnl(newline_position);
	*newline_position = '\0';
	return (rest);
}
