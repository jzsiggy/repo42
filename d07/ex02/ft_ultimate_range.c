/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 15:41:19 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/18 23:03:55 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		dif;
	int		index;

	dif = (max - min);

	if (min >= max)
		return (0);
	*range = (int*)malloc(sizeof(range) * (dif));
	index = 0;
	while (index < dif)
	{
		(*range)[index] = min;
		printf("%d ", (*range)[index]);
		min++;
		index++;
	}
	return(dif * 4);
}

int		main(void)
{
	int **array;

	int a = ft_ultimate_range(array , 7, 13);
	return(0);
}
	


