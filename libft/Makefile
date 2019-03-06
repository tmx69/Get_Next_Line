# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/28 11:59:15 by rywisozk          #+#    #+#              #
#    Updated: 2018/12/06 14:11:03 by rywisozk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES = *.c
OBJECT = ./*.o

all:	$(NAME)
$(NAME):	
		gcc -Wall -Werror -Wextra -c $(FILES) -I libft.h
		ar rc $(NAME) $(OBJECT)
		ranlib $(NAME)
clean:
		rm -rf $(OBJECT)
fclean: clean
		rm -rf $(NAME)
re: fclean all