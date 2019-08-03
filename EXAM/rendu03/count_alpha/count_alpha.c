/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 15:59:44 by exam              #+#    #+#             */
/*   Updated: 2019/08/02 17:12:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int			is_upper(char c)
{
	if (c <= 90 && c >= 65)
		return (1);
	return (0);
}

void		make_lower(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_upper(str[i]))
			str[i] += 32;
		i++;
	}
}

int			is_lower(char c)
{
	if (c <= 122 && c >= 97)
		return (1);
	return (0);
}

void		count_alpha(char *str)
{
	int		i;
	int		j;
	int		total = 0;
	int		sum = 1;

	i = 0;
	make_lower(str);
	while (str[i] != '\0')
	{
		sum = 1;
		if (is_lower(str[i]))
		{
			j = i + 1;
			while (str[j] != '\0')
			{
				if (str[j] == str[i])
				{
					sum++;
					str[j] = '0';
				}
				j++;
			}
			if (total < 1)
				printf("%d%c", sum, str[i]);
			else
				printf(", %d%c", sum, str[i]);
			total++;
		}
		i++;
	}
}


int			main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	count_alpha(argv[1]);
	printf("\n");
	return (0);
}
