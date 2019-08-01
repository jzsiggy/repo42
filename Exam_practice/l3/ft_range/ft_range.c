/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 18:01:20 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/31 18:18:30 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int		*tab;
	int		i;
	int		size;

	size = end - start;
	if (size < 0)
		size = size * -1;

	tab = (int *)malloc(sizeof(int) * size);
	i = 0;

	while (start <= end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	return (tab);
}

int		main(int argc, char **argv)
{
	int		*tab;
	int		start;
	int		end;
	int		i;

	if (argc != 3)
		return (0);
	start = atoi(argv[1]);
	end = atoi(argv[2]);
	i = 0;
	tab = ft_range(start, end);
	while (start <= end)
	{
		printf("%d", tab[i]);
		i++;
		start++;
	}
	return (0);
}
