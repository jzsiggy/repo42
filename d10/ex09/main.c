/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 20:43:01 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/23 00:22:04 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int		*make_func_tab(void);
char	**make_operator_tab(void);

int		main(int argc, char **argv)
{
	int nb;
	int index;
	int *func_tab;
	char **operator_tab;

	func_tab = make_func_tab();
	operator_tab = make_operator_tab();
	if (argc != 3)
		return(0);
	index = 0;
	while (operator_tab[index] != argv[2])
	{
		index++;
		if (index == 5)
		{
			ft_putnbr(0);
			return (0);
		}
	}
	nb = func_tab[index](atoi(argv[1]), atoi(argv[3]));
	ft_putnbr(nb);
	return (0);
}




