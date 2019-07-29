/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 18:23:12 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 19:25:06 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
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

int		get_len(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int		main(int argc, char **argv)
{
	int index;

	if (argc != 4)
	{
		ft_putchar('\n');
		exit(0);
	}

	if (get_len(argv[2]) != 1 || get_len(argv[3]) != 1)
	{
		ft_putchar('\n');
		exit(0);
	}
	
	index = 0;

	while (argv[1][index] != '\0')
	{
		if (argv[1][index] == argv[2][0])
		{
			argv[1][index] = argv[3][0];
		}
		index++;
	}
	ft_putstr(argv[1]);
	ft_putchar('\n');
	return (0);
}	
