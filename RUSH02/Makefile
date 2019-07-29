# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jzsigmon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/28 21:45:52 by jzsigmon          #+#    #+#              #
#    Updated: 2019/07/28 21:59:03 by jzsigmon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-02

SRCS = *.c

all: $(NAME)

$(NAME):
	gcc -o $(NAME) -Wall -Wextra -Werror $(SRCS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: clean all
