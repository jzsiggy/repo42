/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:49:37 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/11 22:21:14 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char ch);

void	ft_print_comb(void)
{
	int vars[3];

	vars[0] = 0;
	while (vars[0] <= 9)
	{
		vars[1] = vars[0] + 1;
		while (vars[1] <= 9)
		{
			vars[2] = vars[1] + 1;
			while (vars[2] <= 9)
			{
				ft_putchar(('0' + vars[0]));
				ft_putchar(('0' + vars[1]));
				ft_putchar(('0' + vars[2]));
				if ((100 * vars[0]) + (10 * vars[1]) + vars[2] != 789)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				++vars[2];
			}
			++vars[1];
		}
		++vars[0];
	}
}
