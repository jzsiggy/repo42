/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 19:44:33 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/27 20:06:49 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*do_operations(char *str, i, j)
{
	while (i < j && str[i] != '\0')
	{
		if (i == '*')
		{
			do_mult(str, i);
			do_operations(str, i, j);
		}
		if (i == '/')
		{
			do_div(str, i);
			do_operaations(str, i, j)
		}
		if (i == '+')
		{
			do_add(str, i);
			do_operations(str, i, j);
		}	
		if (i == '-')
		{
			do_sub(str, i);
			do_operations(str, i, j);
		}
		if (i == '%')
		{
			do_mod(str, i);
			do_operations(str, i, j);
		}
		i++;
	}
	return (str);
}
