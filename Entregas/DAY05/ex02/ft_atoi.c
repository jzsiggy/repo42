/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:13:16 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/16 20:31:01 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_neg(char *str)
{
	if (str[0] == '-')
		return (1);
	else
		return (0);
}

int		check_whitespace(char ch)
{
	if (ch == ' ' || ch == '\t' || ch == '\n' ||
		ch == '\f' || ch == '\v' || ch == '\r' || ch == 43)
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int index;
	int nbr;

	index = 0;
	nbr = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= '0' && str[index] <= '9')
		{
			nbr *= 10;
			nbr += (str[index] - '0');
			index += 1;
		}
		else if (check_whitespace(str[index]) == 1 && nbr == 0)
			index++;
		else if (check_neg(str) == 1)
			index++;
		else
			break ;
	}
	if (check_neg(str) == 0)
		return (nbr);
	else
		return (nbr * -1);
}
