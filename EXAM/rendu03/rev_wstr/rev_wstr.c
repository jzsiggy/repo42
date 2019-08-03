/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 11:56:19 by exam              #+#    #+#             */
/*   Updated: 2019/08/02 12:35:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			count_spaces(char *str)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
			sum++;
		i++;
	}
	return (sum);
}

int			go_to_space(int n, char *str)
{
	int i;

	i = 0;
	while (n > 0)
	{
		if (str[i] == ' ' || str[i] == '\t')
			n--;
		i++;
	}
	return (i);
}


void		print_until_space(int i, char *str)
{
	char c;

	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

void		display(char *str)
{
	int i;
	int spaces;

	spaces = count_spaces(str);

	while (spaces > 0)
	{
		i = go_to_space(spaces, str);
		print_until_space(i, str);
		write(1, " ", 1);
		spaces--;
	}
	print_until_space(0, str);
}

int			main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	display(argv[1]);
	write(1, "\n", 1);
	return (0);
}







