/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 20:23:50 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 21:13:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		is_whitespace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}

int		get_len(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return(index);
}

int		main(int argc, char **argv)
{
	int index;
	int i;
	int len;
	index = 0;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}

	while (argv[1][index] != '\0')
	{
		while (is_whitespace(argv[1][index]) == 1  && is_whitespace(argv[1][index + 1]) == 1)
		{
			i = index;
			while (argv[1][i] != '\0')
			{
				argv[1][i] = argv[1][i+1];
				i++;
			}
		}
		index++;
	}
	
	if (is_whitespace(argv[1][0]))
	{
		index = 0;
		while (argv[1][index] != '\0')
		{
			argv[1][index] = argv[1][index + 1];
			index++;
		}
	}

	len = get_len(argv[1]);
	if (is_whitespace(argv[1][len - 1]) == 1)
		argv[1][len - 1] = '\0';

	ft_putstr(argv[1]);
	ft_putchar('\n');
	return (0);
}
