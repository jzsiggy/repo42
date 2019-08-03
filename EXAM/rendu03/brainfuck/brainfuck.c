/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 14:22:24 by exam              #+#    #+#             */
/*   Updated: 2019/08/02 15:53:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 2048
#include <unistd.h>
#include <stdlib.h>

int			find_closing_bracket(int i, char *str)
{
	int e;
	e = 0;
	while (str[i] != ']' || e != 0)
	{
		if (str[i] == '[')
			e++;
		if (str[i] == ']')
			e--;
		i++;
	}
	return (i);
}

int			find_opening_bracket(int i, char *str)
{
	int e;
	e = 0;
	while (str[i] != '[' || e != 0)
	{
		if (str[i] == ']')
			e++;
		if (str[i] == '[')
			e--;
		i--;
	}
	return (i);
}

void		reset_to_zero(char *str, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
}

void		brainfuck(char *str)
{
	char	*bytes;
	char	c;
	int		i;
	int		j;

	bytes = (char *)malloc(SIZE);
	reset_to_zero(bytes, SIZE);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '>')
			j++;
		if (str[i] == '<')
			j--;
		if (str[i] == '+')
			bytes[j]++;
		if (str[i] == '-')
			bytes[j]--;
		if (str[i] == '.')
		{
			c = bytes[j];
			write(1, &c, 1);
		}
		if (str[i] == '[')
		{
			if (bytes[j] == 0)
			{
				i = find_closing_bracket(++i, str);
				continue ;
			}
		}
		if (str[i] == ']')
		{
			if (bytes[j] != 0)
			{
				i = find_opening_bracket(--i, str);
				continue ;
			}
		}
		i++;
	}
}


int			main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	brainfuck(argv[1]);
	return (0);
}
