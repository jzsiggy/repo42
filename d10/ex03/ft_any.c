/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:25:08 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/22 16:39:34 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int get_len(char **tab)
{
	int index;

	index = 0;
	while (tab[index] != 0)
		index++;

	return (index);
}

int		ft_any(char **tab, int(*f)(char*))
{
	int index;
	int len;

	len = get_len(tab);
	index = 0;
	while (index < len)
	{
		if (f(tab[index]) == 1)
			return (1);
		index++;
	}
	return (0);
}
