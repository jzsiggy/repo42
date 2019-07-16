/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:20:41 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/15 12:31:38 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_putchar.c"

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		main(void)
{
	char str1[] = "hey Dude";

	ft_putstr(str1);
	return (0);
}
