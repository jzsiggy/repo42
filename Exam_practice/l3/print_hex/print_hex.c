/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 12:42:19 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/31 16:50:19 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_atoi(char *str)
{
	int	i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	return (nb);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(int nb, char *tab)
{
	if (nb > 1)
	{
		print_hex(nb / 2, tab);
		print_hex(nb % 2, tab);
	}
	else
		ft_putchar(tab[nb]);
}

int		main(int argc, char **argv)
{
	char		*tab;

	tab = "0123456789abcdef"; 
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	print_hex(ft_atoi(argv[1]), tab);
	write(1, "\n", 1);
	return (0);
}

