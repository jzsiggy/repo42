/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 18:21:25 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/25 19:35:52 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_display_file(char *file);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_display_err(char *str)
{
	write(2, str, ft_strlen(str));
}

int		main(int argc, char **argv)
{
	if (argc > 2)
	{
		ft_display_err("Too many arguments.");
		return (0);
	}
	if (argc < 2)
	{
		ft_display_err("File name missing.");
		return (0);
	}
	ft_display_file(argv[1]);
	return (0);
}
