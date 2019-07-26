/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 21:48:13 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/25 23:20:46 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

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
	int		i;
	char	c;

	if (argc == 1)
	{
		while (read(0, &c, 1))
			write(1, &c, 1);
	}
	i = 1;
	while (i < argc)
	{
		if (open(argv[i], O_RDONLY) != -1)
			ft_display_file(argv[i]);
		else
			ft_display_err("Unable\n");
		i++;
	}
	return (0);
}
