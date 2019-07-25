/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:38:05 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/24 12:14:52 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ft_list__
#define __ft_list__

typedef	struct			s_list
{
	struct	s_list		*next;
	char				*str;
}						t_list;

t_list	*add_link(t_list *list, char *str);
void	print_list(t_list *list);

#endif
