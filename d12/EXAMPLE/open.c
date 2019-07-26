/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:27:35 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/25 18:52:32 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(int fd, char *str);	

int		main(void)
{
	int		fd;
	char	*str;

	fd = open("README", O_WRONLY | O_APPEND);
	printf("%d", fd);

	str = "HELLO MY FRIENDS";
	ft_putstr(fd, str);

	if (close(fd) == -1)
		printf("Close failed");
	return (0);
}
