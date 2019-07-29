/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 21:21:31 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/28 21:57:19 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <unistd.h>

void	print(int row, int col, int i, int n)
{
	if (n > 0)
	{
		ft_putstr(" || ");
	}
	if (row == 0)
		col = 0;
	ft_putstr("[rush-0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(row);
	ft_putstr("] [");
	ft_putnbr(col);
	ft_putstr("]");
}

void	check_condition(char *str, int row, int col)
{
	int n;

	n = 0;
	if (ft_strcmp(str, rush_00(row, col)) == 0)
		print(row, col, 0, n++);
	if (ft_strcmp(str, rush_01(row, col)) == 0)
		print(row, col, 1, n++);
	if (ft_strcmp(str, rush_02(row, col)) == 0)
	{
		print(row, col, 2, n++);
	}
	if (ft_strcmp(str, rush_03(row, col)) == 0)
	{
		print(row, col, 3, n++);
	}
	if (ft_strcmp(str, rush_04(row, col)) == 0)
	{
		print(row, col, 4, n++);
	}
	if (n == 0)
	{
		ft_putstr("aucune");
	}
	ft_putstr("\n");
}

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_printchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}
