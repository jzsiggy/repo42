/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 23:05:55 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/16 00:23:23 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int			check_len(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int index;
	int dest_len;

	index = 0;
	dest_len = check_len(dest);
	while (index < dest_len)
	{
		if (index <= n)
		{
			dest[index] = src[index];
		}
		else
		{
			dest[index] = '\0';
		}
		index++;		
	}
	return(dest);
}

int		main(void)
{
	char dest[] = "hello, my friends";
	char src[] = "fala amigo";
	printf("%s", strncpy(dest, src, 3));
}
