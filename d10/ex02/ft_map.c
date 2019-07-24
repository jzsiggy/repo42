/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:20:22 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/22 16:24:19 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *array;
	
	i = 0;
	array = (int*)malloc(sizeof(*array) * length);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
}

