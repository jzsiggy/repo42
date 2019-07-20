/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 11:26:38 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/17 11:31:41 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int x;
	
	x = *a
	*a = *b;
	*b = x;	
}

int main(){
	int na = 5;
	int nb = 10;
	int *ptr1;
	int *ptr2;
	
	printf("%p",ptr1);
	ptr1 = &na;
	printf("%p",ptr1);
	ptr2 = &nb;
	ft_swap(*ptr1, *ptr2);
}
