/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 21:43:45 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/13 22:11:45 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int div;

	div = 2;
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	
	while (div < nb / 2)
	{
		if (nb % div == 0)
		{
			return (0);
		}

		div++;
	}
	return (1);
}

int		main(void)
{
	printf("%d \n", ft_is_prime(1));
	printf("%d \n", ft_is_prime(3));
	printf("%d \n", ft_is_prime(6));
	printf("%d \n", ft_is_prime(7));
	printf("%d \n", ft_is_prime(15));
	printf("%d \n", ft_is_prime(1276169));

	return (0);
}
