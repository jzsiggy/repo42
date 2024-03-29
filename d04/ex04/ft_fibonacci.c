/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:02:39 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/13 20:49:46 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}

	if (index <= 1)
	{
		return (index);
	}
	return (ft_fibonacci(index-1) + ft_fibonacci(index-2));
}

int		main(void)
{
	printf("%d \n", ft_fibonacci(0));
	printf("%d \n", ft_fibonacci(1));
	printf("%d \n", ft_fibonacci(2));
	printf("%d \n", ft_fibonacci(3));
	printf("%d \n", ft_fibonacci(4));
	printf("%d \n", ft_fibonacci(5));
	printf("%d \n", ft_fibonacci(6));
	printf("%d \n", ft_fibonacci(7));
	printf("%d \n", ft_fibonacci(8));
	printf("%d \n", ft_fibonacci(9));
	printf("%d \n", ft_fibonacci(10));
}
