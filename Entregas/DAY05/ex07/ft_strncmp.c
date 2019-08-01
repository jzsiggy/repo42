/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 15:38:50 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/16 20:43:01 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
		if (s1[index] > s2[index])
			return (s1[index] - s2[index]);
		else if (s2[index] > s1[index])
			return (s1[index] - s2[index]);
		else
			index++;
	}
	return (0);
}
