/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 01:12:31 by dapetros          #+#    #+#             */
/*   Updated: 2024/01/26 01:16:22 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_joined_buffer(char *buffer, int fd)
{
	char	temp[BUFFER_SIZE + 1];
	long	i;

	i = -1;
	while (++i <= BUFFER_SIZE)
		temp[i] = '\0';
	i = 1;
	while (!ft_strchr(temp, '\n') && i)
	{
		i = read(fd, temp, BUFFER_SIZE);
		if (i < 0 || (!i && !buffer))
			return (NULL);
		temp[i] = '\0';
		if (!buffer)
			buffer = ft_strdup(temp);
		else
			buffer = ft_strjoin(buffer, temp);
		if (!buffer)
			return (NULL);
	}
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer[OPEN_MAX];
	char		*ret_line;
	char		*temp;
	int			i;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	buffer[fd] = get_joined_buffer(buffer[fd], fd);
	if (!buffer[fd])
		return (NULL);
	i = 0;
	while (buffer[fd][i] != '\n' && buffer[fd][i])
		++i;
	if (buffer[fd][i] == '\n')
		++i;
	ret_line = ft_substr(buffer[fd], 0, i);
	temp = ft_substr(buffer[fd], i, ft_strlen(buffer[fd]) - i);
	free(buffer[fd]);
	buffer[fd] = temp;
	return (ret_line);
}
