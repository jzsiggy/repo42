/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 02:52:14 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/26 03:06:00 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_btree	*btree_create_node(void *item)
{
	t_btree *tmp;

	tmp = (t_btree*)malloc(sizeof(t_btree));
	tmp->item = item;
	tmp->left = 0;
	tmp->right = 0;
	return (tmp);
}
