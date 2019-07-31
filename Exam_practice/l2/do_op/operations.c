/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 22:29:32 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/29 22:45:01 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		do_mult(int x, int y)
{
	printf("%d", x * y);
	return (x * y);
}

int		do_div(int x, int y)
{
	printf("%d", x / y);
	return (x / y);
}

int		do_sum(int x, int y)
{
	printf("%d", x + y);
	return (x + y);
}

int		do_neg(int x, int y)
{
	printf("%d", x - y);
	return (x - y);
}

int		do_mod(int x, int y)
{
	printf("%d", x % y);
	return (x % y);
}
