/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 15:24:14 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/11 18:08:24 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_putchar.c"

void	ft_putnbr(int nb)
{
	int rev_num = 0;
	while (nb > 0)
	{
		rev_num = rev_num*10 + nb%10;
		nb=nb/10;
	}

	nb = rev_num;
	
	while (nb/10!=0 || nb%10!=0)
	{
		ft_putchar('0'+(nb%10));
		nb=nb/10;
	}
}

int	main(void)
{
	ft_putnbr(1234567890);
}
