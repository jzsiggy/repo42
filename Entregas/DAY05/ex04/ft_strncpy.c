/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 23:05:55 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/16 20:24:24 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	check_len(char *str)
{
	unsigned int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;
	unsigned int	dest_len;
	unsigned int	src_len;

	index = 0;
	dest_len = check_len(dest);
	src_len = check_len(src);
	while (index < dest_len)
	{
		if (src_len < n)
		{
			if (index < src_len)
				dest[index] = src[index];
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
	return (dest);
}
