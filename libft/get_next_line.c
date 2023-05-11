/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:02:03 by albgonza          #+#    #+#             */
/*   Updated: 2022/06/08 12:51:16 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_newstr(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	*str = 0;
	return (str);
}

static char	*ft_savebuffer(int fd, char *buf)
{
	char	*tmp;
	int		bytes;

	bytes = 1;
	tmp = malloc(BUFFER_SIZE + 1);
	if (!tmp)
		return (NULL);
	while (!ft_strchr(buf, '\n') && bytes != 0)
	{
		bytes = read(fd, tmp, BUFFER_SIZE);
		if (bytes < 0)
		{
			free(tmp);
			free(buf);
			return (NULL);
		}
		tmp[bytes] = '\0';
		if (!buf)
			buf = ft_newstr();
		buf = ft_strjoin(buf, tmp);
	}
	free(tmp);
	return (buf);
}

static char	*ft_getline(char *buf)
{
	int		index;
	char	*line;

	index = 0;
	if (!buf[index])
		return (NULL);
	while (buf[index] != '\n' && buf[index])
		index++;
	line = malloc(index + 2);
	if (!line)
		return (NULL);
	index = 0;
	while (buf[index] != '\n' && buf[index])
	{
		line[index] = buf[index];
		index++;
	}
	if (buf[index] == '\n')
		line[index++] = '\n';
	line[index] = 0;
	return (line);
}

static char	*ft_cleanbuf(char *buf)
{
	int		index;
	char	*c_buf;
	int		index2;

	index = 0;
	while (buf[index] != '\n' && buf[index])
		index++;
	if (!buf[index])
	{
		free(buf);
		return (NULL);
	}
	c_buf = malloc(ft_strlen(buf) - index + 1);
	if (!c_buf)
		return (NULL);
	index++;
	index2 = 0;
	while (buf[index])
		c_buf[index2++] = buf[index++];
	c_buf[index2] = 0;
	free(buf);
	return (c_buf);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buf;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = ft_savebuffer(fd, buf);
	if (!buf)
		return (NULL);
	line = ft_getline(buf);
	buf = ft_cleanbuf(buf);
	return (line);
}
