/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjiseong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 20:28:28 by sjiseong          #+#    #+#             */
/*   Updated: 2019/07/31 20:26:57 by sjiseong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		convert_to_int(char *str, int start, int end, int is_negative)
{
	int result;

	result = 0;
	while (start < end)
	{
		result *= 10;
		result += *(str + start) - '0';
		start++;
	}
	if (is_negative)
		return (-result);
	return (result);
}

int		ft_atoi(char *str, int index)
{
	int i;
	int start_index;
	int	is_negative;

	is_negative = 0;
	i = 0;
	while (*(str + i) == ' ' || *(str + i) == '\t' || *(str + i) == '\n' ||
			*(str + i) == '\f' || *(str + i) == '\v' || *(str + i) == '\r')
		i++;
	if (*(str + i) == '-')
	{
		is_negative = 1;
		i++;
	}
	else if (*(str + i) == '+')
		i++;
	start_index = i;
	while (*(str + i) >= '0' && *(str + i) <= '9')
		i++;
	if (i > index)
		i = index + 1;
	return (convert_to_int(str, start_index, i, is_negative));
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
