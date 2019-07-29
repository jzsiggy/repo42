/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 18:06:31 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 18:15:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_maff_alpha(void)
{
	char *str;
	int index;

	index = 0;
	str = "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n";
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

int		main(void)
{
	ft_maff_alpha();
	return (0);
}
