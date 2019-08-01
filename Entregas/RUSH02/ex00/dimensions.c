/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dimensions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 21:26:41 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/28 21:26:47 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_horizontal(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

int		get_vertical(char *str)
{
	int		i;
	int		sum;

	i = 0;
	sum = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			sum++;
		i++;
	}
	return (sum);
}
