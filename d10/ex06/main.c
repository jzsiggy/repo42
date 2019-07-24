/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 19:16:41 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/23 19:40:01 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ft_atoi atoi
#include "headers.h"
#include <stdlib.h>

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		main(int argc, void **argv)
{
	if (argc != 3)
		return (0);
	if (argv[2] == "+")
		ft_putnbr(sum(ft_atoi(argv[1]), ft_atoi(argv[3])));
	if (argv[2] == "-")
		ft_putnbr(subtract(ft_atoi(argv[1]), ft_atoi(argv[3])));
	if (argv[2] == "*")
		ft_putnbr(mult(ft_atoi(argv[1]), ft_atoi(argv[3])));
	if (argv[2] == "/")
	{
		if (ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(div(ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	if (argv[2] == "%")
	{
		if (ft_atoi(argv[3] == 0))
			ft_putstr("Dtop : modulo by zero");
		else
			ft_putnbr(mod(ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	return (0);
}
