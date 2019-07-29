/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:43:13 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 21:59:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int len;
	char *str;
	int i;
	int nbr_clone;
	
	len = 0;
	nbr_clone = nbr;
	while (nbr_clone / 10 != 0)
	{
		nbr_clone /= 10;
		len++;
	}

	str = (char*)malloc(sizeof(*str) * (len + 1));

	str[len + 1] = '\0';
	while (len >= 0)
	{
		str[len] = nbr % 10;
		nbr /= 10;
		len--;
	}

	return (str);
}
