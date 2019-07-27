/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 13:20:30 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/26 16:55:21 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (!root->item)
		return ;
	applyf(root->item);
	if (root->right)
		btree_apply_prefix(root->right, applyf(void *));
	if (root->left)
		btree_apply_prefix(root->left, applyf(void *));
}
