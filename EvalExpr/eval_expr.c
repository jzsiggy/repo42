/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 15:03:42 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/28 15:49:14 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**malloc_tab(char *str);

char	**mk_tab(char **tab, char *str);

int		eval_expr(char *str)
{
	int		op;
	int		cp;
	int		i;
	char	**tab;

	tab = malloc_tab(str);
	tab = mk_tab(tab, str);

	return (0);
}
