/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:13:16 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/15 17:28:21 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		check_neg(char *str)
{
	if (str[0] == '-')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int index;
	int nbr;
	int neg;

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
		else if (str[index] == ' ' && nbr == 0)
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

int		main(void)
{
	char *str1 = "1234";
	char *str2 = "10 34";
	char *str3 = "-1234";
	char *str4 = "0    ";
	char *str5 = "    12323444";
	char *str6 = "2147483647";
	char *str7 = "-2147483648";
	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n", ft_atoi(str4));
	printf("%d\n", ft_atoi(str5));
	printf("%d\n", ft_atoi(str6));
	printf("%d\n", ft_atoi(str7));
}

