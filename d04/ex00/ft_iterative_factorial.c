/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 12:27:31 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/13 21:12:39 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = nb;
	if (nb == 0)
	{
		return(1);
	}
	
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}

	while (nb > 1)
	{
		--nb;
		factorial *= nb;
	}

	return(factorial);
}

int		main(void)
{
	printf("%d \n", ft_iterative_factorial(5));
	printf("%d \n", ft_iterative_factorial(0));
	printf("%d \n", ft_iterative_factorial(14));
	printf("%d \n", ft_iterative_factorial(-3));
	printf("%d \n", ft_iterative_factorial(13));
	return(0);
}
