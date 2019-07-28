/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 15:03:42 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/27 23:06:26 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		eval_expr(char *str)
{
	int		op;
	int		cp;
	int		i;
	char	**tab;

	tab = malloc_tab(str);
	tab = mk_tab(tab, str);
	i = 0;
/*	op = -1;
	while ( str[i] != '\0')
	{
		if (str[i] == '(')
			op = i;
		if (str[i] == ')')
		{
			cp = i;
			break ;
		}
		i++
	}
	
	if (op == -1)
		res = do_operations(str, 0, len(str));
	else
	{
		res = do_operations(str, op + 1, cp);
	}	*/

	while (tab[i])
	{
		printf("%s", tab[i]);
		i++;
	}
	return (tab);
	}
