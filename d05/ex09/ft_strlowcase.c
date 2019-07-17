/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:40:14 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/16 17:42:02 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 65 && str[index] <= 90)
			str[index] = str[index] + 32;
		index++;
	}
	return (str);
}

int			main(void)
{
	char	str[] = "hEY, GUYS, WAZP";
	printf("%s", ft_strlowcase(str));
}
