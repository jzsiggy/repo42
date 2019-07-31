/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjiseong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 17:59:48 by sjiseong          #+#    #+#             */
/*   Updated: 2019/07/30 21:32:23 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFSIZE 1

void	print_array(int *tab, int x, int y)
{
	int i;

	i = 0;
	while (i < x * y)
	{
		printf("%d", tab[i]);
		i++;
		if (i % x == 0)
		{
			printf("\n");
			continue ;
		}
	}
}

void	display2(int value, int index, int *xy, char *labels)
{

}

void	display(char *str, int *map, char *labels, int *xy)
{
	printf("DISPLAY\n");
	int		i;
	int		j;
	int		value;

	i = 0;
	value = 0;
	while (i < xy[0] * xy[1])
	{
		if (map[i] > value)
		{
			value = map[i];
			j = i;
		}
		i++;
	}
	str[j + (j  / xy[0])] = labels[2];
	printf("%s", str);
	display2(value, j + j / xy[0], xy, labels);
}

int		*get_borders(char *str, char *labels, int *xy, int *map)
{
	printf("GETTING BORDERS\n");
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] == labels[0])
			map[i] = 1;
		if (str[j] == labels[1])
			map[i] = 0;
		if (str[j] == '\n')
		{
			j++;
			continue ;
		}
		i++;
		j++;
	}
	print_array(map, xy[0], xy[1]);
	return (map);
}

int		*get_indexes(int *map, char *labels, int *xy)
{
	printf("GETTING INDEXES\n");
	int		smallest;
	int		i;
	
	i = 0;
	while (i < xy[0] * xy[1])
	{
		if (i > xy[0] && i % (xy[0]) != 0)
		{
			if (map[i] == 1)
			{
				smallest = map[i - 1];
				if (map[i - (xy[0])] < smallest)
					smallest = map[i - (xy[0])];
				if (map[i - (xy[0] + 1)] < smallest)
					smallest = map[i - (xy[0] + 1)];
				map[i] = smallest + 1;
			}
		}
		i++;
	}
	print_array(map, xy[0], xy[1]);
	return (map);
}

void		find_bsq(char *str, char *labels, int *xy)
{
	int		*map;

	map = (int*)malloc(sizeof(int) * xy[0] * xy[1]);
	int		*borders = get_borders(str, labels, xy, map);
	int		*all = get_indexes(borders, labels, xy);
	display(str, map, labels, xy);
}

int			main(void)
{
	char 	*map;
	char	buf[BUFSIZE];
	int		ret;
	int		xy[2];
	char	labels[3];
	int		i;

	i = 0;
	map = (char *)malloc(sizeof(char) * 32000);
	while ((ret = read(0, buf, BUFSIZE)) != 0)
	{
		map[i] = buf[0];
		i++;
	}
	map[i] = '\0';
	labels[0] = '.';
	labels[1] = 'o';
	labels[2] = 'X';
	xy[0] = 5;
	xy[1] = 5;

	printf("%s\n", map);
	find_bsq(map, labels, xy);
	return (0);
}
	
	
