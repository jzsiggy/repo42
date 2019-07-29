/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 18:46:51 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 19:05:05 by exam             ###   ########.fr       */
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
	char	*str1;
	char	*str2;
	int		i;
	int		j;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	j = 0;
	str1 = argv[1];
	str2 = argv[2];
	while (str2[j] != '\0' && str1[i] != '\0')
	{
		if (str2[j] == str1[i])
			i++;
		j++;
	}
	if (str1[i] == '\0')
		ft_putstr(str1);
	write(1, "\n", 1);
	return (0);
}
