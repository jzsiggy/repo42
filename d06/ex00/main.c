/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:22:20 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/17 16:40:16 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(void)
{
	int a;
	int b;
	int *ptr1;
	int	*ptr2;
	
	a = 3;
	b = 4;
	ptr1 = &a;
	ptr2 = &b;
	ft_putchar('h');
	ft_swap(ptr1, ptr2);
	ft_putstr("Hello, My Friends");
	ft_strlen("Hello");
	ft_strcmp("OMG", "MY GOSH");
	return(0);
}
