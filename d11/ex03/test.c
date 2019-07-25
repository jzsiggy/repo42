/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:15:41 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/24 21:16:39 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int ft_list_size(t_list *begin_list);

t_list* ft_create_elem(void* data)
{
	t_list* item = malloc(sizeof(t_list));
	item->next = NULL;
	item->data = data;
	return (item);
}

#define CE(data) ft_create_elem(data)

void crap_a_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s,", (char*)list->data);
	printf("\n");
}

int main()
{
	t_list* list = 0;
	printf("%d\n", ft_list_size(list));
	list = CE("asdf");
	printf("%d\n", ft_list_size(list));
	list->next = CE("qwer");
	list->next->next = CE("zxcv");
	printf("%d\n", ft_list_size(list));
	list = CE("asdf");
	list->next = CE("asdf");
	list->next->next = CE("asdf");
	list->next->next->next = CE("asdf");
	printf("%d\n", ft_list_size(list));
	list->next->next->next->next = CE("asdf");
	printf("%d\n", ft_list_size(list));
}
