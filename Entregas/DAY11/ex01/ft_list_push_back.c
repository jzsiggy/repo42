/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 16:15:06 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/24 23:04:43 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tmp;

	tmp = ft_create_elem(data);
	if (!*begin_list)
	{
		*begin_list = tmp;
		return ;
	}
	while ((*begin_list)->next)
		begin_list = &((*begin_list)->next);
	(*begin_list)->next = tmp;
}
