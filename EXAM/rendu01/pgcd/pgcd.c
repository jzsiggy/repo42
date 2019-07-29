/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:19:09 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 21:36:06 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		greatest_cd(int nb1, int nb2)
{
	int d = 1;
	int smallest;
	int gcd;

	if (nb1 == nb2)
		return nb1;

	if (nb1 - nb2 > 0)
		smallest = nb2;
	else
		smallest = nb1;
	while (d <= smallest)
	{
		if (nb1 % d == 0 && nb2 % d == 0)
			gcd = d;
		d++;
	}
	return (gcd);
}

int		main(int argc, char **argv)
{
	int nb1;
	int nb2;

	if (argc != 3)
	{
		printf("\n");
		return (0);
	}
	
	nb1 = atoi(argv[1]);
	nb2 = atoi(argv[2]);

	printf("%d\n", greatest_cd(nb1, nb2));
	return (0);
}



