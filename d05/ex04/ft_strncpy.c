/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 23:05:55 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/16 13:50:22 by jzsigmon         ###   ########.fr       */
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
	int src_len;

	index = 0;
	dest_len = check_len(dest);
	src_len = check_len(src);
	while (index < dest_len)
	{
		if (src_len < n)
		{
			if (index < src_len)
				dest[index] =src[index];
			else
				dest[index] = '\0';
		}
		else
		{
			if (index < src_len && index < n)
				dest[index] = src[index];
		}
		index++;
	}
	return(dest);
}

int		main(void)
{
	char dest[] = "hellfreedo";
	char src[] = "fa eu amie";
	printf("%s\n", strncpy(dest, src, 2));
	printf("%s\n", ft_strncpy(dest, src, 2));
}




