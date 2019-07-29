/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 19:10:41 by exam              #+#    #+#             */
/*   Updated: 2019/07/12 20:16:52 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int len = 0;
	
	while (str[len] != '\n')
	{
		len++;
	}

	char a[len];
	int index = 0;

	while (index != len)
	{
		a[index] = str[len - 1 - index];
		index++;
	}

	*str[len] = a;
	return(str);
}
