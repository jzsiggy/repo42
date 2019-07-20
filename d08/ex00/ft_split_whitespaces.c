/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 21:48:26 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/19 17:28:37 by jzsigmon         ###   ########.fr       */
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
	char **array;

	array = (char**)malloc(sizeof(*array) * (get_num_words(str) + 1));
	return (array);
}

char	*get_new_word(char *str, int starting_index, int end_index)
{
	char *word;
	int  dif;
	int  w_index;

	dif = end_index - starting_index;
	w_index = 0;
	word = (char*)malloc(sizeof(*word) * (dif + 1));
	while (starting_index <= end_index)
	{
		word[w_index] = str[starting_index];
		w_index++;
		starting_index++;
	}
	word[w_index] = '\0';
	printf("%s\n", word);
	return (word);
}


char	**ft_split_whitespaces(char *str)
{	
	int i;
	int strt;
	int end;
	int current_word;
	char **array;

	strt = 0;
	array = get_array_memory(str);
	current_word = 0;
	i = 0;
	while (current_word != get_num_words(str))
	{
		while (str[i] != '\0')
		{
			if (is_whitespace(str[i]) == 0 && (is_whitespace(str[i - 1]) == 1 || i == 0))
				strt = i;
			else if (is_whitespace(str[i]) ==  1 && is_whitespace(str[i - 1]) == 0)
			{	
				end = i;
				break ;
			}
			i++;
		}
		//printf("%d, %d, %d\n", strt, end ,0);
		if (end - strt > 0)
		{
			array[current_word] = get_new_word(str, strt, end);
			current_word++;
		}
		i++;
	}
	array[current_word] = 0;
	return (array);
}


int		main(void)
{
	char *str = "  hel      o    my  fr ";
	char **split_str = ft_split_whitespaces(str);

	printf("%d", get_num_words(str));
	return (0);
}

