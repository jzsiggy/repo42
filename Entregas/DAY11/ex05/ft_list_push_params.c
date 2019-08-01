/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:38:16 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/24 23:06:41 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*tmp;
	t_list	*list;
	t_list	*begin;

	list = ft_create_elem(av[--ac]);
	begin = list;
	while (ac > 0)
	{
		tmp = ft_create_elem(av[--ac]);
		list->next = tmp;
		list = tmp;
	}
	return (begin);
}
