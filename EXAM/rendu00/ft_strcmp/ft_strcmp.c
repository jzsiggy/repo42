/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 19:10:41 by exam              #+#    #+#             */
/*   Updated: 2019/07/12 20:45:48 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;
	
	while (s1[lens1] != '\n')
	{
		lens1++;
	}

	while (s2[lens2] != '\n')
	{
		lens2++;
	}

	int dif = lens1 - lens2;

	return(dif);
}
