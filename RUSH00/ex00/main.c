/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:41:08 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/28 20:50:42 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	rush(int x, int y);

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "error", 5);
		return (0);
	}
	rush(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
