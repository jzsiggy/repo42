/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:56:55 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/22 17:12:00 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int index;

	index = 1;
	while (index < length)
	{
		if (f(tab[index], tab[index - 1]) <= 0)
			return (0);
		index++;
	}
	return (1);
}
