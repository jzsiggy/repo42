/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 12:05:30 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/30 12:32:43 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		rot_13(char *str)
{
	int		i;
	int		num;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			num = str[i] + 13;
			if (num > 122)
				str[i] = 96 + (num - 122);
			else
				str[i] = num;
		}	
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 13;
			if (str[i] > 90)
				str[i] = 64 + (str[i] - 90);
		}
		i++;
	}
}

int			len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int			main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	rot_13(argv[1]);
	write(1, argv[1], len(argv[1]));
	write(1, "\n", 1);
	return (0);
}
		
		
	

