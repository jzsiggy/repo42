/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:41:55 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/17 21:20:01 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int index;

	index = 0;
	if (argc < 0)
		return (-1);
	while (argv[0][index] != '\0')
	{
		ft_putchar(argv[0][index]);
		index++;
	}
	ft_putchar('\n');
}
