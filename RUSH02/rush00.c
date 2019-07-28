/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:23:26 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/27 21:31:16 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char ch);

void		first_line_00(int x)
{
	int counter;

	counter = 0;
	while (counter < x)
	{
		if ( counter == 0)
			ft_putchar('o');
		else if ( counter == x-1)
			ft_putchar('o');
		else
			ft_putchar('-');
		counter++;
	}
}

void		last_line_00(int x)
{
	int counter;

	counter = 0;
	while (counter < x)
	{
		if ( counter == 0)
			ft_putchar('o');
		else if ( counter == x-1)
			ft_putchar('o');
		else
			ft_putchar('-');
		counter++;
	}
}

void		middle_lines_00(int x)
{
	int counter;

	counter = 0;
	while (counter < x)
	{
		if (counter == 0)
			ft_putchar('|');
		else if (counter == x-1)
			ft_putchar('|');
		else
			ft_putchar(' ');
	counter++;
	}
}


void		rush_00(int x, int y)
{
	int counter;

	counter = 0;
	while (counter < y)
	{
		if ( counter == 0 )
			first_line_00(x);
		else if ( counter == y - 1)
			last_line_00(x);
		else
			middle_lines_00(x);
	counter++;
	ft_putchar('\n');
	}
	ft_putchar('\n');
}

	



			
