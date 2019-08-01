/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjiseong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 22:49:43 by sjiseong          #+#    #+#             */
/*   Updated: 2019/07/31 23:41:27 by sjiseong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int		is_map_invalid(char *map, char *label, int *xy, int i)
{
	int	pre_n;
	int	count;

	count = 0;
	pre_n = i;
	while (map[++i])
	{
		if (map[i] != label[0] && map[i] != label[1] && map[i] != '\n')
			return (1);
		if (map[i] == '\n')
		{
			if (i - pre_n != xy[0] + 1)
				return (1);
			pre_n = i;
			if (++count > xy[1])
				return (1);
		}
	}
	if (count != xy[1])
		return (1);
	if (map[--i] != '\n')
		return (1);
	return (0);
}

int		call_find_bsq(char *map)
{
	char	label[3];
	int		xy[2];
	int		i;

	i = 0;
	while (map[i] != '\n')
		i++;
	label[2] = map[i - 1];
	label[1] = map[i - 2];
	label[0] = map[i - 3];
	if ((xy[1] = ft_atoi(map, i - 4)) < 1)
		return (1);
	xy[0] = 0;
	while (map[i + xy[0] + 1] != '\n' && map[i + xy[0] + 1])
		xy[0]++;
	if (xy[0] < 1)
		return (1);
	if (is_map_invalid(map, label, xy, i))
		return (1);
	find_bsq(map + i + 1, label, xy);
	return (0);
}

void	in_main(int fd, char *map, int i, int ac)
{
	if (close(fd) == -1)
		write(2, "map error\n", 10);
	if (call_find_bsq(map))
		write(2, "map error\n", 10);
	if (i != ac - 1)
		write(1, "\n", 1);
	return ;
}

int		main(int ac, char **av)
{
	char	*map;
	int		i;
	int		fd;

	i = 0;
	if (ac == 1)
	{
		map = read_map_from_stdi();
		if (call_find_bsq(map))
			write(2, "map error\n", 10);
	}
	while (++i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (fd == -1)
		{
			write(2, "map error\n", 10);
			if (i != ac - 1)
				write(1, "\n", 1);
			continue ;
		}
		map = read_map(fd, av[i]);
		in_main(fd, map, i, ac);
	}
	return (0);
}
