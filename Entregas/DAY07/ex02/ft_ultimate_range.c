/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 15:41:19 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/18 23:14:24 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		dif;
	int		index;

	dif = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int*)malloc(sizeof(range) * (dif));
	if (*range == 0)
		return (0);
	index = 0;
	while (index < dif)
	{
		(*range)[index] = min;
		min++;
		index++;
	}
	return (dif);
}
