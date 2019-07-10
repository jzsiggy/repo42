/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 10:22:10 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/10 10:35:16 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_putchar(char c){
	write(1, &c, 1);
	return(0);
}
void ft_print_alphabet(void){
	char ch = 'a';
	while (ch <= 'z') {
		ft_putchar(ch);
		ch = ch + 1;
	}
}
int main() {
	ft_print_alphabet();
	return(0);
}
