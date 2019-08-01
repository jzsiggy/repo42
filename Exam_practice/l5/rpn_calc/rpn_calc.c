/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 17:02:35 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/31 17:44:20 by jzsigmon         ###   ########.fr       */
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

void		operate(char *str, int i, int nb1, int nb2)
{
	char	op;

	op = str[i];

	if (op == '*')
		str[i] = nb1 * nb2;
	if (op == '/')
		str[i] = nb1 / nb2;
	if (op == '+')
		str[i] = nb1 + nb2;
	if (op == '-')
		str[i] = nb1 - nb2;
	if (op == '%')
		str[i] = nb1 % nb2;
}

int			get_nth_num(int n, char *str, int i)
{
	while (n > 0)
	{
		if (is_num(str[i]))
			n--;
		i--;
	}
	return (atoi(str[i]));
}

void		display(char *str)
{
	int		i;

	while (str[i] != '\0')
	{
		if (is_op(str[i]))
			operate(str, i, get_nth_num(2, str, i), get_nth_num(1, str, i));
		i++;
	}
	printf("%s", str);
}
			

int			main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("error");
		return (0);
	}
	display(argv[1]);
	return (0);
}
