/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:40:13 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/22 16:56:25 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			sum++;
		i++;
	}

	return (sum);
}

