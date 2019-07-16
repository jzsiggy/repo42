/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 19:41:43 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/15 23:04:28 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_putchar.c"
#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int		main(void)
{
	char	dest[123] = "hwkikjn";
	char	src[] = "hellosdufhbu";

	printf("%s \n", strcpy(dest, src));
}
