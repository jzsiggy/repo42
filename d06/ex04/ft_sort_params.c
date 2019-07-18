/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 22:21:17 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/17 23:40:05 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(char *str1, char *str2)
{
	char x;

	x = *str1;
	*str1 = *str2;
	*str2 = x;
}

int		sorted(char	**array, int i)
{
	int index;

	index = 1;
	while (array[index][i] < array[index - 1][i])
		index++;
		if (array[index] = '\0')
			return (1);
	return(0);
}

void	ft_putargs(**array)
{
	int arg_index;
	int index;

	arg_index = 0;
	while (arg_index != '\0')
	{
		index = 0;
		while (array[arg_index][index] != '\0')
		{
			ft_putchar(array[arg_index][index]);
			index++;
		}
		arg_index++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int args_i;
	int r;

	i = 0;
	args_i = 2;

	while (sorted(argv, i) == 0)
	{
		r = strcmp(argv[args_i][i], argv[args_i - 1][i]);
		if (r < 0)
			ft_swap(argv[args_i], argv[args_i - 1]);
		args_i++;
	}
	ft_putargs(argv);
}



