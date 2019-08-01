/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjiseong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 11:53:01 by sjiseong          #+#    #+#             */
/*   Updated: 2019/07/31 23:21:06 by sjiseong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 8192
#define STDI_BUF_SIZE 8192
#define STDI_MAP "stdi_map"

char	*read_map_from_stdi(void)
{
	char	*map;
	char	*buf;
	int		res;
	int		size;
	int		fd;

	size = 0;
	buf = (char*)malloc(sizeof(char) * (STDI_BUF_SIZE + 1));
	fd = open(STDI_MAP, O_RDWR | O_CREAT | O_TRUNC, 0644);
	while ((res = read(0, buf, STDI_BUF_SIZE)))
	{
		write(fd, buf, res);
		size += res;
	}
	map = (char*)malloc(sizeof(char) * (size + 1));
	map[size] = 0;
	close(fd);
	fd = open(STDI_MAP, O_RDONLY);
	read(fd, map, size);
	close(fd);
	free(buf);
	return (map);
}

char	*read_map(int fd, char *filename)
{
	char	*map;
	char	*buf;
	int		res;
	int		size;

	size = 0;
	buf = (char*)malloc(sizeof(char) * (BUF_SIZE + 1));
	while ((res = read(fd, buf, BUF_SIZE)))
		size += res;
	map = (char*)malloc(sizeof(char) * (size + 1));
	close(fd);
	fd = open(filename, O_RDONLY);
	read(fd, map, size);
	map[size] = 0;
	free(buf);
	return (map);
}
