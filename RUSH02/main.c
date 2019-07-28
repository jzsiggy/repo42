/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:41:08 by jzsigmon          #+#    #+#             */
/*   Updated: 2019/07/27 21:41:19 by jzsigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "rush.h"

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "error", 5);
		return (0);
	}
	rush_00(atoi(argv[1]), atoi(argv[2]));
	rush_01(atoi(argv[1]), atoi(argv[2]));
	rush_02(atoi(argv[1]), atoi(argv[2]));
	rush_03(atoi(argv[1]), atoi(argv[2]));
	rush_04(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
