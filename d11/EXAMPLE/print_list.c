/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:58:52 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/24 12:09:58 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ft_putstr puts
#include "ft_list.h"
#include <stdio.h>

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->str);
		list = list->next;
	}
}

