/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:51:38 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/14 12:36:29 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_putchar(char ch)
{
	write(1, &ch, 1);
	return(0);
}

void		sastantua(int size)
{
	int rows_per_row;

	rows_per_row = 3;
	if (size == 0)
	{
	}
	else
	{
		while (size > 1)
		{
			rows_per_row += rows_per_row + 1;
			size -= 1;
		}
	}
	ft_putchar(rows_per_row);
}

int			main(void)
{
	sastantua(3);
	return (0);
}



