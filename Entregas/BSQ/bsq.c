/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjiseong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 17:59:48 by sjiseong          #+#    #+#             */
/*   Updated: 2019/07/31 22:50:34 by sjiseong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void			display(char *str, int *v_j, char full, int *xy)
{
	int		j;
	int		i;
	int		index;

	index = v_j[1] + v_j[1] / xy[0];
	i = -1;
	while (++i < v_j[0])
	{
		j = -1;
		while (++j < v_j[0])
			str[index - j] = full;
		index -= xy[0] + 1;
	}
	write(1, str, xy[0] * xy[1] + xy[1]);
}

unsigned short	*get_borders(char *str, char obs, int *xy)
{
	unsigned short	*map;
	int				i;
	int				j;

	map = (unsigned short*)malloc(sizeof(short) * xy[0] * xy[1]);
	i = 0;
	j = -1;
	while (str[++j] != '\0')
	{
		if (str[j] == obs)
			map[i++] = 0;
		else if (str[j] != '\n')
			map[i++] = 1;
	}
	return (map);
}

void			get_indexes(unsigned short *map, int *xy, int *v_j)
{
	int		smallest;
	int		i;
	int		biggest;

	i = xy[0] - 1;
	biggest = 0;
	while (++i < xy[0] * xy[1])
	{
		if (i % (xy[0]) != 0 && map[i] != 0)
		{
			smallest = map[i - 1];
			if (map[i - (xy[0])] < smallest)
				smallest = map[i - (xy[0])];
			if (map[i - (xy[0] + 1)] < smallest)
				smallest = map[i - (xy[0] + 1)];
			map[i] = smallest + 1;
			if (smallest >= biggest)
			{
				biggest = map[i];
				v_j[1] = i;
			}
		}
	}
	v_j[0] = biggest;
}

void			find_bsq(char *str, char *labels, int *xy)
{
	unsigned short	*map;
	int				v_j[2];

	v_j[0] = 0;
	v_j[1] = 0;
	map = get_borders(str, labels[1], xy);
	get_indexes(map, xy, v_j);
	display(str, v_j, labels[2], xy);
}
