# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjiseong <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/29 22:45:40 by sjiseong          #+#    #+#              #
#    Updated: 2019/07/31 20:39:40 by sjiseong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

all : $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror -o $(NAME) *.c

clean :
	rm -f *.o stdi_map

fclean : clean
	rm -f $(NAME)

re : fclean all
