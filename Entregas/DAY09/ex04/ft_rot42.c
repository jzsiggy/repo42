/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 13:22:32 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/19 16:55:21 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_len(char *str)
{
	int index;

	while (str[index] != '\0')
		index++;
	return (index);
}

char	*ft_rot42(char *str)
{
	int		index;
	char	*res[get_len(str)];

	index = 0;
	while (str[index] != '\0')
	{
		res[index] = str[index] + 1;
		index++;
	}
	return (res);
}
