/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 21:31:42 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/28 20:57:55 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

char		*rush_00(int x, int y);
char		*rush_01(int x, int y);
char		*rush_02(int x, int y);
char		*rush_03(int x, int y);
char		*rush_04(int x, int y);
char		*mk_str(void);
int			get_horizontal(char *str);
int			get_vertical(char *str);
void		print(int row, int col, int i, int n);
void		check_condition(char *str, int x, int y);
int			ft_strcmp(char *str1, char *str2);
void		ft_putnbr(int nb);
void		ft_putstr(char *str);
void		ft_printchar(char c);

#endif
