/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 10:36:41 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/10 11:24:55 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c) {
	write(1, &c, 1);
	return(0);
}

void ft_print_reverse_alphabet(void) {
	char ch = 'z';
	while (ch >= 'a') {
		ft_putchar(ch);
		--ch;
	}
}

int main(){
	ft_print_reverse_alphabet();
}
