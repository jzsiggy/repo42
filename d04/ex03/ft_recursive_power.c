/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:45:00 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/13 17:00:58 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	
	if (power >= 2)
	{
		power--;
		return (nb * ft_recursive_power(nb, power));
	}
	return (nb);
}

int		main(void)
{
	printf("%d \n", ft_recursive_power(5, 2));
	printf("%d \n", ft_recursive_power(10, 4));
	printf("%d \n", ft_recursive_power(-10, 4));
	printf("%d \n", ft_recursive_power(5, -2));
	return (0);
}	

