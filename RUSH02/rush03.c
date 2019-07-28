/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:23:26 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/27 21:30:28 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char ch);

void		first_line_03(int x)
{
	int counter;

	counter = 0;
	while (counter < x)
	{
		if ( counter == 0)
			ft_putchar('A');
		else if ( counter == x-1)
			ft_putchar('C');
		else
			ft_putchar('B');
		counter++;
	}
}

void		last_line_03(int x)
{
	int counter;

	counter = 0;
	while (counter < x)
	{
		if ( counter == 0)
			ft_putchar('A');
		else if ( counter == x-1)
			ft_putchar('C');
		else
			ft_putchar('B');
		counter++;
	}
}

void		middle_lines_03(int x)
{
	int counter;

	counter = 0;
	while (counter < x)
	{
		if (counter == 0)
			ft_putchar('B');
		else if (counter == x-1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	counter++;
	}
}


void		rush_03(int x, int y)
{
	int counter;

	counter = 0;
	while (counter < y)
	{
		if ( counter == 0 )
			first_line_03(x);
		else if ( counter == y - 1)
			last_line_03(x);
		else
			middle_lines_03(x);
	counter++;
	ft_putchar('\n');
	}
	ft_putchar('\n');
}

	



			
