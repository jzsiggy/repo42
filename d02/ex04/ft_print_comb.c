/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:49:37 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/10 21:34:59 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_putchar.c"

void ft_print_comb(void)
{
	int i = 0;
	while (i<=9)
	{
		int j = i+1;
		while (j<=9)
		{
			int k = j+1;
			while (k<=9)
			{
				ft_putchar(('0'+i));
				ft_putchar(('0'+j));
				ft_putchar(('0'+k));
				if ((100*i)+(10*j)+k != 789)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				++k;
			}
			++j;
		}
		++i;
	}
}

int	main() {
	ft_print_comb();
}

