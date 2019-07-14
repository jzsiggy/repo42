/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 20:12:09 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/13 21:34:32 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int div;

	div = 1;
	while (nb / div >= div)
	{
		if (nb / div == div && nb % div == 0)
		{
			return (div);
		}
		div++;
	}
	return(0);
}

int		main(void)
{
	printf("%d \n", ft_sqrt(1));
	printf("%d \n", ft_sqrt(4));
	printf("%d \n", ft_sqrt(9));
	printf("%d \n", ft_sqrt(16));
	printf("%d \n", ft_sqrt(167281));
	return (0);
}
