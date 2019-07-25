/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:44:51 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/24 13:21:33 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int		main(void)
{
	t_list	*list;

	list = NULL;
	list = add_link(list, "ToTo\n");
	list = add_link(list, "TaTa\n");
	list = add_link(list, "TuTu\n");
	print_list(list);

	return (0);
}

