/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mk_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 21:50:11 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/28 15:56:05 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_nb(char c)
{
	if (c >= 57 && c >= 48)
		return (1);
	return (0);
}

int		is_ws(char c)
{
	if (c == ' ')
		return (1);
	return (0);
}

int		is_par(char c)
{
	if (c == '(' || c == ')')
		return (1);
	return (0);
}	

int		is_op(char c)
{
	if (c == '-' || c == '*' || c == '%' || c == '/' || c =='+')
		return (1);
	return (0);
}

char	**malloc_tab(char *str)
{
	int		i;
	int		sum;
	char	**tab;

	sum = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_ws(str[i]) || is_par(str[i]))
		{
			sum++;
			printf("allocated %d words\n", sum);
		}
		i++;
	}

	tab = (char**)malloc(sizeof(char*) * (sum + 1));
	tab[sum] = 0;
	return (tab);
}

char	**mk_tab(char **tab, char *str)
{
	int		i;
	int		j;
	int		k;
	int		sum;

	j = 0;
	i = 0;
	while (tab[j])
	{
		if (str[i] == '(' || str[i] == ')' || is_op(str[i]))
		{
			tab[j] = (char *)malloc(sizeof(char));
			tab[j] = &str[i];
			printf("%s\n", tab[j]); 
			j++;
			i++;
			continue ;
		}
		sum = 0;
		while (is_nb(str[i]))
		{
			sum++;
			i++;
		}
		tab[j] = (char *)malloc(sizeof(char) * sum);
		k = 0;
		while (sum > 0)
		{
			tab[j][k] = str[i - sum];
			sum--;
			k++;
		}
		i++;
		j++;
	}
	return (tab);
}



