/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:15:04 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/13 21:18:09 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int base;

	base = nb;
	if (power < 0)
	{
		return(0);
	}

	if (power == 0)
	{
		return (nb);
	}

	while (power != 1) 
	{
		nb = nb * base;
		--power;
	}
	return(nb);
}

int		main(void)
{
	printf("%d \n", ft_iterative_power(10, 3));
	printf("%d \n", ft_iterative_power(12, 2));
	printf("%d \n", ft_iterative_power(2, 3));
	printf("%d \n", ft_iterative_power(-10, 2));
	printf("%d \n", ft_iterative_power(5, -3));
	printf("%d \n", ft_iterative_power(5, 0));
	printf("%d \n", ft_iterative_power(5, 1));
	return(0);
}
