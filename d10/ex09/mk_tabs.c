/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mk_tabs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 23:44:32 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/23 00:19:19 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int *make_func_tab(void)
{
	int (*func_tab[5])(int, int)
	
	func_tab[0] = sum;
	func_tab[1] = subtract;
	func_tab[2] = mult;
	func_tab[3] = div;
	func_tab[4] = mod;
	return (func_tab);
}

char **make_operator_tab(void)
{
	char **operator_tab[5];
	
	operator_tab[0] = "+";
	operator_tab[1] = "-";
	operator_tab[2] = "*";
	operator_tab[3] = "/";
	operator_tab[4] = "%";
	return (operator_tab)
}
