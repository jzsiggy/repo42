/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 12:42:15 by exam              #+#    #+#             */
/*   Updated: 2019/08/02 14:09:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			get_size(char *str)
{
	int i;

	i= 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int			ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while(str1[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (1);
		i++;
	}
	return (0);
}	

int			ft_atoi(char *str)
{
	int		nb;
	int		i;
	int		sign = 1;
	
	if (ft_strcmp(str, "-2147483648") == 0)
		return (-2147483648);
	if (str[0] == '-')
	{
		sign = -1;
		str[0] = '0';
	}
	nb = 0;
	i = 0;
	while (str[i] != '\0')
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	return (nb * sign);
}

char		*ft_itoa_base(int value, int base)
{
	char	str[] = "0123456789ABCDEF";
	char	tab[500];
	int		i;
	char	*ret;
	int		size;
	int		sign;

	if (value == -2147483648 && base == 10)
		return("-2147483648");

	i = 0;
	if (value < 0)
	{
		value *= -1;
		sign = -1;
	}

	while (value / base || value % base)
	{
		tab[i] = str[value % base];
		value /= base;
		i++;
	}
	tab[i] = '\0';

	size = get_size(tab);
	ret = (char*)malloc(sizeof(char) * size + 1);
	i = 0;
	if (sign < 0)
	{
		ret[i] = '-';
		i++;
		size++;
	}
	while (i < size)
	{
		ret[i] = tab[size - 1 - i];
		i++;
	}
	ret[size] = '\0';

	return(ret);
}
