/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 15:45:16 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/08/01 18:02:11 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			is_opening_bracket(char c)
{
	if (c == '[' || c == '(' || c == '{')
		return (1);
	return (0);
}

int			is_closing_bracket(char c)
{
	if (c == ']' || c == ')' || c == '}')
		return (1);
	return (0);
}

int			n_opening_brackets(char *str)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (str[i] != '\0')
	{
		if (is_opening_bracket(str[i]))
			sum++;
		i++;
	}
	return (sum);
}

int			n_closing_brackets(char *str)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (str[i] != '\0')
	{
		if (is_closing_bracket(str[i]))
			sum++;
		i++;
	}
	return (sum);
}

int			is_corresponding(char open, char close)
{
	if ((open == '[' && close == ']') || (open == '(' && close == ')')
			|| (open == '{' && close == '}'))
		return (1);
	return (0);
}

void		find_brackets(char *str)
{
	char		open;
	int			i, j;

	if (n_opening_brackets(str) == 0 && n_closing_brackets(str) == 0)
	{
		write(1, "OK", 2);
		return ;
	}

	if (n_opening_brackets(str) != n_closing_brackets(str))
	{
		write(1, "Error", 5);
		return ;
	}

	i = 0;
	while (!(is_closing_bracket(str[i])))
	{
		if (is_opening_bracket(str[i]))
		{
			open = str[i];
			j = i;
		}
		i++;
	}

	if (!(is_corresponding(open, str[i])))
	{
		write(1, "Error in correspondenc", 23);
		return ;
	}
	else
	{
		str[i] = '0';
		str[j] = '0';
	}
	find_brackets(str);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc <= 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		find_brackets(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

