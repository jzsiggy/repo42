/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 18:09:21 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 18:19:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	if (argc <= 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_putstr(argv[argc - 1]);
	write(1, "\n", 1);
	return (0);
}


