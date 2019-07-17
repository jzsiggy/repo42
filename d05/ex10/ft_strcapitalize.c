/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:44:55 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/16 23:40:45 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_whitespace(char ch)
{
	if ((ch > 122 || ch < 97) || (ch > 90 || ch < 65) || (ch > 57 || ch < 48))
		return (1);
	else
		return (0);
}

int		is_lower(char ch)
{
	if (ch <= 122 || ch >= 97)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (is_lower(str[index]) == 1 && is_whitespace(str[index - 1]) == 1)
			str[index] = str[index] + 32;
		index++;
	}
	return (str);
}
