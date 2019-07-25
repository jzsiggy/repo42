/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:30:46 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/24 21:31:48 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_list_last(t_list *begin_list);

t_list* ft_create_elem(void* data)
{
	t_list* item = malloc(sizeof(t_list));
	item->next = NULL;
	item->data = data;
	return (item);
}

#define CE(data) ft_create_elem(data)
#define CL(list) crap_a_list(list)

void crap_a_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s,", (char*)list->data);
	printf("\n");
}

int main()
{
	t_list* list = 0;
	printf("%p\n", ft_list_last(list));
	list = CE("asdf");
	printf("%s\n", (char*)(ft_list_last(list)->data));
	list->next = CE("qwer");
	list->next->next = CE("zxcv");
	printf("%s\n", (char*)(ft_list_last(list)->data));
	list = CE("asdf");
	list->next = CE("qwer");
	list->next->next = CE("zxcv");
	list->next->next->next = CE("uiop");
	printf("%s\n", (char*)(ft_list_last(list)->data));
	list->next->next->next->next = CE("hjkl");
	printf("%s\n", (char*)(ft_list_last(list)->data));
}
