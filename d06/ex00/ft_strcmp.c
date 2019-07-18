/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:47:11 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/17 11:47:31 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] > s2[index])
			return ((s2[index] - s1[index]) * -1);
		else if (s2[index] > s1[index])
			return (s1[index] - s2[index]);
		else
			index++;
	}
	if (s1[index] == '\0')
		return (s2[index] * -1);
	else if (s2[index] == '\0')
		return (s1[index]);
	return (0);
}
