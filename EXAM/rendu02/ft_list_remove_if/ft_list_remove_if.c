/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 20:00:00 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 20:34:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*next;

	if (!*begin_list)
		return ;

	while ((*begin_list)->next)
	{
		next = (*begin_list)->next;
		if (cmp((*begin_list)->data, data_ref) == 0)
		   free(*begin_list);
		*begin_list = next;
	}
	if (cmp((*begin_list)->data, data_ref) == 0)
	   free(*begin_list);
}

