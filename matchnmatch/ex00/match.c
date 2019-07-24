/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 23:36:53 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/21 23:28:32 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		len(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;

	return(len - 1);
}

int first_a(char *str)
{
	int index;

	index = 0;
	while (str[index] != '*')
		index++;
	
	return (index);	
}

int last_a(char *str)
{
	int index;
	int a_index;

	index = 0;
	a_index = -1;
	while (str[index] != '\0')
	{
		if (str[index] == '*')
			a_index = index;
		index++;
	}
	return (a_index);
}

int		match(char *s1, char *s2)
{
	int i;
	int j;

	if (last_a(s2) == -1)
	{
		i = 0;
		if (len(s1) != len(s2))
			return (0);
		while (s1[i] == s2[i] && s2[i] != '\0') 
			i++;
		if (s1[i] == s2[i])
			return (1);
		return (0);
	}
	
	if (s2[len(s2)] != '*')
	{
		i = len(s1);
		j = len(s2);
		while ( j != last_a(s2))
		{
			if (s2[j] == s1[i])
			{
				i--;
				j--;
			}
			else
			{
				printf("Letters After last * dont match");
				return (0);
			}
		}
	}
	i = 0;
	if (s2[0] != '*')
	{
		while (i != first_a(s2))
		{
			if (s1[i] == s2[i])
				i++;
			else
			{
				printf("Letters before first * dont match");
				return (0);
			}
		}
	}
	j = i;
	while (j != last_a(s2))
	{
		if (s2[j] == '*')
			j++;
		else if (s1[i] == s2[j])
		{
			j++;
			i++;
		}
		else if (s1[i] != s2[j])
			i++;
	}

	if (j == last_a(s2))
		return (1);
	return (0);
}
