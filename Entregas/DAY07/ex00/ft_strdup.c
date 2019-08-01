/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 11:28:14 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/18 23:13:31 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			get_len(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char		*ft_strdup(char *src)
{
	int		index;
	int		src_len;
	char	*str;

	src_len = get_len(src);
	str = (char*)malloc(sizeof(*str) * (src_len + 1));
	index = 0;
	while (index <= src_len)
	{
		str[index] = src[index];
		index++;
	}
	return (str);
}
