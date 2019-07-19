/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 12:27:58 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/18 17:02:29 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int		dif;
	int		index;
	int		*res;

	dif = (max - min) + 1;

	if (min >= max)
		return ((void*)0);
	res = (int*)malloc(sizeof(res) * (dif));
	index = 0;
	while (index < dif - 1)
	{
		res[index] = min;
		printf("%d ", res[index]);
		min++;
		index++;
	}
	return(res);
}

int		main(int argc, char **argv)
{
	argc = 0;

	int *a = ft_range(7, 13);
}
	


