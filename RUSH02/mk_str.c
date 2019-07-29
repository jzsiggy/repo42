/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mk_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 21:25:07 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/28 21:25:10 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFSIZE 1

char		*mk_str(void)
{
	char	*str;
	int		i;
	int		ret;
	char	buf[BUFSIZE + 1];

	str = (char*)malloc(sizeof(char) * 32000);
	i = 0;
	while ((ret = read(STDIN_FILENO, buf, BUFSIZE)) > 0)
	{
		buf[ret] = '\0';
		str[i] = buf[0];
		i++;
	}
	return (str);
}
