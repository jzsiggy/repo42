/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 19:11:12 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/25 23:19:25 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUFSIZE 4096

void	ft_display_file(char *file)
{
	int		fd;
	int		ret;
	char	buf[BUFSIZE + 1];

	fd = open(file, O_RDONLY);
	while ((ret = read(fd, buf, BUFSIZE)) > 0)
	{
		buf[ret] = '\0';
		write(1, buf, ret);
	}
	close(fd);
}
