/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 10:40:07 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/10 11:43:01 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c){
	write(1, &c, 1);
	return(0);
}

void ft_print_numbers(void) {
	int n = 0;
	while (n<10) {
		char ch = n;
		ft_putchar(ch);
		++n;
	}
}

int main() {
	ft_print_numbers();
}
