/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 18:25:44 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 18:41:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	char	*str;
	char	c;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	str = argv[1];
	i = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;

	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
