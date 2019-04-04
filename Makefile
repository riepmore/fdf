# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pierremore <pierremore@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/04/27 23:25:48 by pmore             #+#    #+#              #
#    Updated: 2014/10/11 17:38:37 by pierremore       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
INCLUDES = libft
SRCS = main.c fdf.c line.c key.c error.c take_map.c
OBJECTS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror
LIB = libft

all: $(NAME)

$(NAME):
	@cd $(LIB) ; $(MAKE)
	gcc -o $(NAME) $(FLAGS) $(SRCS) -I libft -L  libft/ \
			-lft -L /usr/X11/lib -lmlx -lXext -lX11
	@cd $(LIB) ; $(MAKE) fclean
	@echo Creating $(NAME)...

clean:
	/bin/rm -f $(OBJECTS)
	@cd $(LIB) ; $(MAKE) fclean
	@echo Removing $(OBJECTS)...

fclean: clean
	/bin/rm -f $(NAME)
	@echo Removing $(NAME)...

re: fclean all

.PHONY: clean fclean re
