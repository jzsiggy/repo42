/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 21:28:36 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/28 21:56:36 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "rush.h"
#include <stdio.h>

int		main(void)
{
	char	*str;
	int		x;
	int		y;

	str = mk_str();
	x = get_horizontal(str);
	y = get_vertical(str);
	check_condition(str, x, y);
	return (0);
}
