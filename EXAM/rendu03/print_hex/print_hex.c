/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 11:03:25 by exam              #+#    #+#             */
/*   Updated: 2019/08/02 11:42:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_atoi(char *str)
{
	int		nb;
	int		i;

	nb = 0;
	i = 0;
	while (str[i] != '\0')
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	return (nb);
}

void		print_hex(int nb)
{
	char	str[] = "0123456789abcdef";
	char	c;

	if (nb > 15)
	{
		print_hex(nb / 16);
		print_hex(nb % 16);
	}
	else
	{
		c = str[nb];
		write( 1, &c, 1);
	}
}

int			main(int argc, char **argv)
{
	int		nb;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	nb = ft_atoi(argv[1]);
	print_hex(nb);
	write (1, "\n", 1);
	return (0);
}
