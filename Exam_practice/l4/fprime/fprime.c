/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 22:04:45 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/31 22:23:38 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		is_prime(int nb)
{
	int		i;
	if (nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		is_factor(int nb, int factor)
{
	if (nb % factor == 0)
		return (1);
	return (0);
}

int		is_factor_is_prime(int i, int nb)
{
	if (is_prime(i) && is_factor(nb, i))
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	if (argc != 2)
	{
		printf("\n");
		return(0);
	}
	i = 1;
	while (i <= atoi(argv[1]))
	{
		if (is_factor_is_prime(i, atoi(argv[1])))
			printf("%d ", i);
		i++;
	}
	return (0);
}
