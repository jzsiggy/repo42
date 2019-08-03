/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 10:13:18 by exam              #+#    #+#             */
/*   Updated: 2019/08/02 10:23:13 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
