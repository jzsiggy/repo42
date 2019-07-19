/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:53:47 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/18 23:37:19 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int get_len_of_arg_char(int argc, char **argv)
{
	int index;
	int i;
	int total;

	total = 0;
	index = 1;
	while (index != argc)
	{
		i = 0;
		while (argv[index][i] != '\0')
		{
			i++;
			total++;
		}
		index++;
	}
	return (total);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		index;
	int		i;
	int		args_len;
	int		str_index;
	
	str_index = 0;
	args_len = get_len_of_arg_char(argc, argv);
	str = (char*)malloc(sizeof(*str) * (args_len + argc));
	index = 1;
	while (index != argc)
	{
		i = 0;
		while (argv[index][i] != '\0')
		{
			str[str_index] = argv[index][i];
			i++;
			str_index++;
		}
		index++;
		if ( index < argc)
			str[str_index] = '\n';
		str_index++;
	}	
	printf("%d\n", args_len);
	return (str);
}

int		main(int argc, char **argv)
{
	char *str;

	if (argc == 0)
		return (0);
	str = ft_concat_params(argc, argv);
	printf("%s", str);
	return (0);
}
