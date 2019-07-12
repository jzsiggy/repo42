/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 10:22:10 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/11 20:20:52 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_putchar.c"

void	ft_print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		ft_putchar(ch);
		ch = ch + 1;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
