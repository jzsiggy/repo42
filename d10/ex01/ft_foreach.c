/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:59:36 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/22 16:19:08 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;

	if (nb / 10 != 0)
	{
		ft_putnbr(nb/10);
		ft_putnbr(nb%10);
	}
	else
	{
		c = '0' + nb;
		write(1, &c, 1);
	}
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int index;

	index = 0;
	while (index < length)
	{
		f(tab[index]);
		index++;
	}
}

int		main()
{
	int tab[] = { 12, 38, 45, 24, 56 , 78 };
	int length = 6;
	ft_foreach(tab, length, &ft_putnbr);
	return (0);
}

	
