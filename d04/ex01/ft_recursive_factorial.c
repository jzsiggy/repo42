/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:53:29 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/13 21:15:39 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if (nb < 0 || nb >= 13)
	{
		return(0);
	}
	
	if (nb == 0)
	{
		return(1);
	}

	if (nb > 0)
	{
		factorial *= nb;	
		nb--;
		factorial *= ft_recursive_factorial(nb);
	}
	return(factorial);
}

int		main(void)
{
	printf("%d \n", ft_recursive_factorial(5));
	printf("%d \n", ft_recursive_factorial(10));
	printf("%d", ft_recursive_factorial(-5));
	return(0);
}
