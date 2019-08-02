/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 00:31:51 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/08/01 00:54:31 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		print_tab(int *tab, unsigned int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}

int			is_sorted(int *tab, unsigned int size)
{
	int i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void		sort_int_tab(int *tab, unsigned int size)
{
	int		i;
	int		tmp;
	
	while (!is_sorted(tab, size))
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				break ;
			}
			i++;
		}
	}
}

int		main(void)
{
	int		tab[12] =  {11,3,24,55,4,657,43,7,2,44,5673,1};

	sort_int_tab(tab, 12);
	print_tab(tab, 12);
	return (0);
}
