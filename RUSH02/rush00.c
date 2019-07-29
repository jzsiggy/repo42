/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 21:30:07 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/28 21:34:52 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_putchar(char ch, char *tab, int i);

void		first_line_00(int x, char *tab)
{
	int counter;

	counter = 0;
	while (counter < x)
	{
		if (counter == 0)
			ft_putchar('o', tab, counter);
		else if (counter == x - 1)
			ft_putchar('o', tab, counter);
		else
			ft_putchar('-', tab, counter);
		counter++;
	}
}

void		last_line_00(int x, int y, char *tab)
{
	int counter;

	counter = 0;
	while (counter < x)
	{
		if (counter == 0)
			ft_putchar('o', tab, counter + (x * (y - 1) + y - 1));
		else if (counter == x - 1)
			ft_putchar('o', tab, counter + (x * (y - 1) + y - 1));
		else
			ft_putchar('-', tab, counter + (x * (y - 1) + y - 1));
		counter++;
	}
}

void		middle_lines_00(int x, int y, char *tab)
{
	int counter;

	counter = 0;
	while (counter < x)
	{
		if (counter == 0)
			ft_putchar('|', tab, counter + ((x * y) + y));
		else if (counter == x - 1)
			ft_putchar('|', tab, counter + ((x * y) + y));
		else
			ft_putchar(' ', tab, counter + ((x * y) + y));
		counter++;
	}
}

char		*rush_00(int x, int y)
{
	char	*tab;
	int		counter;

	tab = (char *)malloc(sizeof(char) * (((x + 1) * y) + 1));
	counter = 0;
	while (counter < y)
	{
		if (counter == 0)
			first_line_00(x, tab);
		else if (counter == y - 1)
			last_line_00(x, y, tab);
		else
			middle_lines_00(x, counter, tab);
		ft_putchar('\n', tab, x + ((x + 1) * counter));
		counter++;
	}
	tab[((x + 1) * y)] = '\0';
	return (tab);
}
