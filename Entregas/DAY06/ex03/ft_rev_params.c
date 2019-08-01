/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 20:39:29 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/17 20:58:13 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		main(int argc, char **argv)
{
	int	args_index;

	args_index = argc - 1;
	if (argc > 0)
	{
		while (args_index > 0)
		{
			ft_putstr(argv[args_index]);
			ft_putchar('\n');
			args_index--;
		}
	}
	else
		return (0);
}
