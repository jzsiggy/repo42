/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjiseong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 22:50:56 by sjiseong          #+#    #+#             */
/*   Updated: 2019/07/31 19:12:42 by sjiseong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

void	find_bsq(char *str, char *label, int *xy);
int		ft_atoi(char *str, int index);
char	*ft_strcpy(char *dest, char *src);
char	*read_map(int fd, char *filename);
char	*read_map_from_stdi(void);

#endif
