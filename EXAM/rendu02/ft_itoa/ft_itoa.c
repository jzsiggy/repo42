/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 20:42:43 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 21:57:44 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_len(int nbr)
{
	int i;

	i = 1;
	while (nbr / 10 != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

void	fill_array(char *tab, int nb, int i)
{
	if (nb == 0)
	{
		tab[i] = '0' + 0;
	}
	while (nb / 10 != 0 || nb % 10 != 0)
	{
		tab[i] = '0' + (nb % 10);
		nb = nb / 10;
		i--;
	}
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*res;

	len = get_len(nbr);

	if (nbr < 0)
	{
		res = (char*)malloc(sizeof(*res) * (len + 2));
		res[0] = '-';
		nbr = nbr * -1;
		fill_array(res, nbr, len);
	}
	else
	{
		res = (char*)malloc(sizeof(*res) * (len + 1));
		fill_array(res, nbr, len - 1);
		res[len] = '\0';
	}

	return (res);
}

