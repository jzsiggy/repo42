/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:32:26 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/16 20:04:15 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_putchar.c"

int		check_negative(int nb)
{
	if ( nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		return (147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		return (-nb);
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int arr[10];
	int single_num;
	int index;
	
	nb = check_negative(nb);
	index = 0;
	if (nb == 0)
		ft_putchar('0');	
	while (nb != 0)
	{
		single_num = nb % 10;
		arr[index] = single_num;
		nb -= single_num;
		nb /= 10;
		index += 1;
	}
	
	while (index - 1 >= 0)
	{
		ft_putchar('0' + arr[index - 1]);
		index -= 1;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_putnbr(123456);
	ft_putnbr(42);
	ft_putnbr(0);
	ft_putnbr(38954);
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
	return (0);
}
