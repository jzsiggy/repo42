/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 13:52:04 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/16 20:23:05 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			get_len(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char		*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
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
	return (0);
}
