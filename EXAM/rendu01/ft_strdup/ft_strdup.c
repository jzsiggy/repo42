/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 19:33:46 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 19:54:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_len(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return(index);
}

char	*ft_strdup(char *src)
{
	char *res;
	int index;

	index = 0;
	res = (char*)malloc(sizeof(*res) * (get_len(src) + 1));

	while (src[index] != '\0')
	{
		res[index] = src[index];
		index++;
	}
	res[index] = '\0';

	return (res);
}
