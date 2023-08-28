/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:38:27 by lbordona          #+#    #+#             */
/*   Updated: 2023/04/21 19:26:35 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*start_next_stash(char *stash)
{
	char	*reserve;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (stash[i] != '\n' && stash[i])
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	reserve = (char *)malloc(sizeof(char) * ((ft_strlen(stash) - i + 1)));
	i++;
	while (stash[i])
	{
		reserve[j] = stash[i];
		j++;
		i++;
	}
	reserve[j] = '\0';
	free (stash);
	return (reserve);
}

char	*print_line(char *stash)
{
	char	*str;
	int		i;

	i = 0;
	if (!stash[i])
		return (NULL);
	while (stash[i] != '\n' && stash[i] != '\0')
		i++;
	str = ft_calloc((i + 2), sizeof(char));
	i = 0;
	while (stash[i] != '\n' && stash[i] != '\0')
	{
		str[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
		str[i] = '\n';
	return (str);
}

char	*ft_free(char *stash, char *temp)
{
	char	*final;

	final = ft_strjoin(stash, temp);
	free (stash);
	return (final);
}

char	*find_line(char *stash, int fd)
{
	char	*temp;
	int		count_char;

	if (!stash)
		stash = ft_calloc(1, 1);
	temp = ft_calloc ((BUFFER_SIZE + 1), sizeof(char));
	count_char = 1;
	while (!ft_strchr(stash, '\n') && count_char != 0)
	{
		count_char = read (fd, temp, BUFFER_SIZE);
		if (count_char == -1)
		{
			free (temp);
			free (stash);
			return (NULL);
		}
		temp [count_char] = '\0';
		stash = ft_free(stash, temp);
	}
	free (temp);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	stash = find_line(stash, fd);
	if (!stash)
		return (NULL);
	line = print_line(stash);
	stash = start_next_stash(stash);
	return (line);
}

/*============================================================*/

/* char	*get_next_line(int fd)
{
	char		*line;
	static char	*save[FOPEN_MAX];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > FOPEN_MAX)
		return (0);
	save[fd] = read_and_save(fd, save[fd]);
	if (!save[fd])
		return (NULL);
	line = get_line(save[fd]);
	save[fd] = ft_save(save[fd]);
	return (line);
}

char	*read_and_save(int fd, char *save)
{
	char	*buffer;
	int		read_bytes;

	buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	read_bytes = 1;
	while (!ft_strchr(save, '\n') && read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		save = ft_strjoin(save, buffer);
	}
	free(buffer);
	return (save);
}

char	*get_line(char *save)
{
	int		i;
	char	*line;

	i = 0;
	if (!save[i])
		return (NULL);
	while (save[i] && save[i] != '\n')
		i++;
	line = ft_calloc((i + 2), sizeof(char));
	i = 0;
	while (save[i] && save[i] != '\n')
	{
		line[i] = save[i];
		i++;
	}
	if (save[i] == '\n')
		line[i] = '\n';
	return (line);
}

char	*ft_save(char *save)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (!save[i])
	{
		free(save);
		return (NULL);
	}
	str = ft_calloc((ft_strlen(save) - i + 1), sizeof(char));
	i++;
	j = 0;
	while (save[i])
		str[j++] = save[i++];
	free(save);
	return (str);
}
 */
