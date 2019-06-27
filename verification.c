/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verification.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <elfetoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 17:54:49 by elfetoua          #+#    #+#             */
/*   Updated: 2019/06/27 05:58:11 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		dashes_per_bloc(char *file)
{
	int		fd;
	int		i;
	int		dash_cnt;
	char	*line;

	fd = open(file, O_RDONLY);
	i = 1;
	dash_cnt = 0;
	while (get_next_line(fd, &line))
	{
		if (i % 5 == 0)
		{
			dash_cnt = 0;
			i = 0;
		}
		while (*lisne)
		{
			if (*line == '#')
				dash_cnt++;
			line++;
		}
		if (dash_cnt != 4 && i == 4)
		{
			close(fd);
			return (0);
		}
		i++;
	}
	close(fd);
	return (1);
}

int		verification(char *file)
{
	int		fd;
	int		i;
	char	*line;
	int		j;

	i = 1;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (0);
	while (get_next_line(fd, &line))
	{
		if (ft_strlen(line) != 4 && i % 5 != 0)//oooooo
			return (0);
		j = 0;
		while (line[j])
		{
			if (!ft_strchr(".#", line[j]))
				return (0);
			j++;
		}
		i++;
	}
	if ((i % 5) != 0 || i > 130)
		return (0);
	close(fd);
	if (!dashes_per_bloc(file))
		return (0);
	return (1);
}
