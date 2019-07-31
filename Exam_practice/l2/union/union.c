/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 12:37:26 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/30 13:15:14 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	unionize(char *str1, char *str2)
{
	int i;
	int j;
	int repeat;
	char c;

	i = 0;

	while (str1[i] != '\0')
	{
		j = i - 1;
		while (j > 0)
		{
			if (str1[i] == str1[j])
			{
				repeat = 1;
				break ;
			}
			j++;
		}
		if (!repeat)
		{
			c = str1[i];
			write(1, &c, 1);
		}
		i++;
	}	
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	unionize(argv[1], argv[2]);
	return (0);
}
