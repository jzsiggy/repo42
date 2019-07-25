/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:02:20 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/24 21:10:30 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*tmp;

	tmp = ft_create_elem(data);
	if (!*begin_list)
	{
		*begin_list = tmp;
		return;
	}
	tmp->next = *begin_list;
	*begin_list = tmp;
}
