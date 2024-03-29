/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 21:43:45 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/13 23:20:48 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int div;

	div = 2;
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	while (div < nb / 2)
	{
		if (nb % div == 0)
		{
			return (0);
		}
		div++;
	}
	return (1);
}
