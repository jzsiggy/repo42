/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 17:02:35 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/08/01 18:50:23 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn.h"

int			is_op(char c)
{
	if (c == '*' || c == '/' || c == '+' || c == '-' || c == '%')
		return (1);
	return (0);
}

int			is_num(char c)
{
	if (c >= '0' && c <= 9)
		return (1);
	return (0);
}

int			operate(char op, int nb1, int nb2)
{
	char	op;

	op = str[i];

	if (op == '*')
		return nb1 * nb2;
	if (op == '/')
		return nb1 / nb2;
	if (op == '+')
		return nb1 + nb2;
	if (op == '-')
		return nb1 - nb2;
	if (op == '%')
		return nb1 % nb2;
}

int			*mk_num_tab(char *str)
{
	int i;
	int j;
	int size;
	int *tab;

	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		if (is_num(str[i]))
			size++;
		i++;
	}
	tab = (int *)malloc(sizeof(int) * size);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (is_num(str[i]))
		{
			tab[j] = atoi(str[i])
			j++;
		i++;
	}

}

char		*mk_op_tab(char *str)
{
}

int			main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("error");
		return (0);
	}
	nums = mk_num_tab(argv[1]);
	ops = mk_op_tab(argv[1]);
	do_op(nums, ops);
	return (0);
}
