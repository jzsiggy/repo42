/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 21:48:26 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/19 05:33:11 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		is_whitespace(char c)
{
	if (c != ' ' && c != '\t' && c != '\n')
		return (0);
	return (1);
}

int		get_num_words(char *str)
{
	int num;
	int index;

	num = 0;
	index = 0;

	while (str[index] != '\0')
	{
		if (is_whitespace(str[index]) == 0)
		{
			if (is_whitespace(str[index - 1]) == 1 || index == 0)
				num++;
		}
		index++;
	}
	return (num);
}

char	**get_array_memory(char *str)
{
	int str_index;
	int arr_index;
	int i;
	char **array;
	array = (char**)malloc(sizeof(*array) * (get_num_words(str) + 1));

	str_index = 0;
	arr_index = 0;
	i = 0;
	while (str[str_index] != '\0')
	{
		if (is_whitespace(str[str_index]) == 0)
		{
			if (is_whitespace(str[str_index - 1]) == 0 || str_index == 0)
			{
				i++;
			}
		}
		else
		{
			array[arr_index] = (char*)malloc(sizeof(**array) * (i + 1));
			arr_index++;
			i =  0;
		}
		str_index++;
	}
	return (array);
}


char	**ft_split_whitespaces(char *str)
{
	int str_index;
	int arr_index;
	int i;
	char **array;
	array = get_array_memory(str);

	str_index = 1;
	arr_index = 0;
	i = 0;
	while (str[str_index] != '\0')
	{
		if (is_whitespace(str[str_index]) == 0)
		{
			if (is_whitespace(str[str_index - 1]) == 0)
			{
				array[arr_index][i] = str[str_index - 1];
				array[arr_index][i + 1] = str[str_index];
				i++;
			}
		}
		else
		{
			printf("%s\n", array[arr_index]);
			arr_index++;
			i = 0;
		}
		str_index++;
	}
	printf("%s\n", array[4]);
	return (array);
}

int		main(void)
{
	char *str = "Oi como vc esta, amigo?";
	char **split_str = ft_split_whitespaces(str);

	printf("%d", get_num_words(str));
	return (0);
}



