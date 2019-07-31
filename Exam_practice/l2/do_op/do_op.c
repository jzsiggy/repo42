/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 22:21:37 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/29 22:46:27 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("NOT RIGHT NUMB");
		return (0);
	}
	if (argv[2][0] == '*')
		do_mult(atoi(argv[1]), atoi(argv[3]));
	if (argv[2][0] == '/')
		do_div(atoi(argv[1]), atoi(argv[3]));
	if (argv[2][0] == '+')
		do_sum(atoi(argv[1]), atoi(argv[3]));
	if (argv[2][0] == '-')
		do_neg(atoi(argv[1]), atoi(argv[3]));
	if (argv[2][0] == '%')
		do_mod(atoi(argv[1]), atoi(argv[3]));
	printf("\n");
	return (0);
}






