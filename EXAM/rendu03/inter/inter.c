/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 10:30:10 by exam              #+#    #+#             */
/*   Updated: 2019/08/02 10:57:06 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_double(int j, char *str)
{
	int i;

	i = 0;
	while (i < j)
	{
		if (str[i] == str[j])
			return (1);
		i++;
	}
	return (0);
}

int		is_in_str(char c, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	display(char *str1, char *str2)
{
	int		i;
	char	c;

	i = 0;

	while (str1[i] != '\0')
	{
		if (is_double(i, str1))
		{
			i++;
			continue ;
		}
		if (is_in_str(str1[i], str2))
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
	display(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
