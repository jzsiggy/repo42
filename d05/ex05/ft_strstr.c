/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 13:52:04 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/16 14:59:52 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int			get_len(char *str)
{
	int index;

	index = 0;
	while ( str[index] != '\0' )
		index++;
	return (index);
}

char		*ft_strstr(char *str, char *to_find)
{
	char 	*ptr;
	int		index;
	int		check_index;

	index = 0;
	while (str[index] != '\0')
	{
		ptr = &str[index];
		check_index = 0;
		while (to_find[check_index] == str[index])
		{
			check_index++;
			index++;
			if (to_find[check_index] == '\0')
				return (ptr);
		}
		index++;
	}
	if (get_len(to_find) == 0)
		return (str);	
	return (NULL);
}

int			main(void)
{
	char	*str = "Hello my friends";
	char	*tofind = "l";


	printf("%s ||%s\n", strstr(str, tofind), ft_strstr(str, tofind));
   return (0);
}   

