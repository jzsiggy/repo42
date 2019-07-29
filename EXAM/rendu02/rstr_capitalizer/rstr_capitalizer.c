/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 19:16:05 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 19:46:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	make_lower(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
}

void	capitalize_last_char(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0')
				str[i] -= 32;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;

	if (argc <= 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		make_lower(argv[i]);
		capitalize_last_char(argv[i]);
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

