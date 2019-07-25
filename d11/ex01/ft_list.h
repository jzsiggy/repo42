/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:38:05 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/24 20:59:41 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ft_list__
#define __ft_list__

typedef	struct			s_list
{
	struct	s_list		*next;
	void				*data;
}						t_list;

t_list					*ft_create_elem(void *data);

#endif
